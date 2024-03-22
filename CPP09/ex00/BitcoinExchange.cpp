/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:45:01 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 10:01:03 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool check_value(std::string str)
{
    std::string::const_iterator it;

    it = str.begin();
    if (str.empty() )
        return (false);
    else if(*it == '+' || *it == '-')
        it++;
    if(*it == '.' || *(str.end() - 1) == '.' || std::count(str.begin(),str.end(),'.') > 1 )
        {
            return (false);
        }
    do{
        if(!isdigit(*it) && *it != '.')
        {
            return (false);
        }
    }while ((++it)  != str.end());
    return (true);
}
std::string get_dt(std::stringstream& ss)
{
    std::string str;
    std::getline(ss,str,'-');
    return (str);
}
bool check_date(const std::string & string_date)
{
    std::tm timeinfo;
    std::stringstream ss;
    ss << string_date;
    int date[3];
    if((strptime(string_date.c_str(),"%Y-%m-%d",&timeinfo) == NULL))
        return (false);
    date[0] = timeinfo.tm_year + 1900;
    date[1] = timeinfo.tm_mon + 1;
    date[2] = timeinfo.tm_mday;
    if((date[0]) != atoi(get_dt(ss).c_str()) || (date[1]) != atoi(get_dt(ss).c_str()) || (date[2]) != atoi(get_dt(ss).c_str()))
    {
        return (false);
    }else if((((date[1] + (date[1] > 7 ? 1 : 0)) % 2 == 0  ) && date[2] ==  31) || ( (date[1] == 2) && (date[2] > 29 || ((date[0] % 4) && date[2] > 28))))
    {
        return (false);
    }
    ss.clear();
    return (true);
}
bool check(std::string & first,std::string &second)
{
    return ( !first.empty() &&  !second.empty() && check_date(first) && check_value(second));
}
BitcoinExchange::BitcoinExchange(void)
{
    std::ifstream file("data.csv",std::ios::in);
    std::string str;
    std::stringstream ss;
    if(file.is_open())
    {
        if(!std::getline(file,str) || str != "date,exchange_rate")
        {
            throw std::runtime_error("invalid data.csv format");
        }
        while (std::getline(file,str))
        {
            std::string first;
            std::string second;
            if( str.empty() ||  str.find(',') == std::string::npos)
            {
                throw std::runtime_error("invalid data.csv format");
            }
            ss << str;
            std::getline(ss,first,',');
            std::getline(ss,second,',');
            if(str.empty()|| first.length() != 10 || !check(first,second) ||first.find(' ',0) != std::string::npos)
            {
                throw std::runtime_error("invalid data.csv format");
            }
            data[first] = atof(second.c_str());
            ss.clear();
            str.clear();
        }
        file.close();
    }else
    {
        throw std::runtime_error("Couldn't open file: data.csv");
    }
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if(this != &other)
    {
        this->data = other.data;   
    }
    return (*this);
}
BitcoinExchange::~BitcoinExchange()
{
    
}
    
void BitcoinExchange::run(const char *fileName)
{
    std::ifstream file(fileName,std::ios::in);
    std::string str;
    float value;
    if(file.is_open())
    {
        if(!std::getline(file,str) || str != "date | value")
        {
            throw std::runtime_error("invalid "+ std::string(fileName) +" format");
        }
        while (std::getline(file,str))
        {
            try
            {
                std::string first;
                std::string second;
                std::stringstream ss;
            if( !str.empty() &&  str.find('|') != std::string::npos)
            {
                 ss << str;
                std::getline(ss,first,'|' );
                std::getline(ss,second,'|');
            }
            std::string::iterator begin = second.begin();
            std::string::iterator end = first.end();
            //---------------------------------------------
            if( str.empty() || second.empty() || first.length() != 11 || std::find(first.begin(),end,' ') != (end -1) || *begin != ' ' || !check_date(first)|| !check_value(&(*(begin + 1))) || first < data.begin()->first)
            {
                ss.clear();
                if(str.empty())
                    throw std::runtime_error("empty line");
                throw std::runtime_error("bad input => " + str);
            } else if ((value = atof(second.c_str())) < 0 || value > 1000)
                throw std::runtime_error((value < 0)?"not a positive number.":"too large a number.");
            value *= (--data.lower_bound(first))->second;
            std::cout << first << "=>" << second << " = " << value<< std::endl;
            str.clear();
            ss.clear();
            }
            catch(const std::exception& e)
            {
                std::cerr <<"Error: "<< e.what() << '\n';
            }
        }
        file.close();
    }else
    {
        throw std::runtime_error("Couldn't open file:" + std::string(fileName));
    }
}