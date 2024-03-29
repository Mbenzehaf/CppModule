/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:54:52 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/14 17:04:44 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

ScalarConverter::ScalarConverter()
{
    //std::cout << "ScalarConverter Default constructor called" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{  
    //std::cout << "ScalarConverter Copy constructor called" << std::endl;
    (void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    //std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
    (void)other;
    return (*this);
}
ScalarConverter::~ScalarConverter()
{
    //std::cout << "ScalarConverter destructor called" << std::endl;
}
void ConvertToChar(const double &number)
{
    std::cout << "char: ";
    (((std::isnan(number) || std::isinf(number))&& std::cout << "impossible")
    || (!isprint(static_cast<int>(number)) && std::cout << "Non displayable")
    || std::cout << "'" << static_cast<char>(number)<< "'");
    std::cout << std::endl;
    
}
void ConvertToInt (const double &number)
{
    std::cout << "int: ";
    (((std::isnan(number) || isinf(number)) && std::cout << "impossible")
    || std::cout << static_cast<int>(number));
    std::cout << std::endl;
}

void ConvertToFloat (const double &number)
{
    std::cout << "float: ";
    ((std::isnan(number) && std::cout << "nan") || (std::isinf(number) && std::cout << (number > 0 ? "+":"-" ) <<"inf")
    || std::cout <<std::fixed << std::setprecision(1)<< static_cast<float>(number));
    std::cout << "f" <<  std::endl;
}
void ConvertToDouble (const double &number)
{
    std::cout << "double: ";
    ((std::isnan(number) && std::cout << "nan")
    ||(std::isinf(number) && std::cout << (number > 0 ? "+":"-" ) << "inf")
    || std::cout <<std::fixed << std::setprecision((static_cast<int>(number) == static_cast<double>(number))? 1 : 4 ) << static_cast<double>(number));
    std::cout << std::endl;
}

bool isAllDigit(const std::string &str)
{   
    int i,p;

    i = 0;
    p = 0;
    if(str[i] && (str[i]=='+' || str[i] == '-'))
    {
        i++;
    }
    if(str[i] == 0 || str[i] == '.')
    {
        return (false);
    }
    while(str[i])
    {
        
        if((!isdigit(str[i]) && str[i] != '.' && str[i] != 'f') || (str[i]== '.' && (p++ || str[i + 1] == '\0')) || (str[i] == 'f'  &&( !p|| str[i + 1] !='\0')))
        {
            return (false);
        }
        i++;
    }
    return (true);      
}

double checkStr(const std::string &str)
{
    double number;
    
    number = std::atof(str.c_str());
    if(str.empty()||(str != "nan" && str != "nanf" && str != "-inff" && str != "+inff" && str != "-inf" && str != "+inf" &&  !isAllDigit(str)))
    {
        throw std::runtime_error("INVALID INPUT"); 
    }else if(str == "nan" || str == "nanf")
    {
        return (nan(""));
    }else if(str == "-inff" || str == "+inff" || str == "-inf" || str == "+inf" )
    {
        return INFINITY * ((str == "-inff" || str == "-inf")?-1:1);
    }
    return (number);
}
void ScalarConverter::convert(const std::string & str)
{
    double number;
    
    number = checkStr(str); 
    ConvertToChar(number);
    ConvertToInt(number);
    ConvertToFloat(number);
    ConvertToDouble(number);
}