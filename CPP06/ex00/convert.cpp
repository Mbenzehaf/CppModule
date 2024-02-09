/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:54:52 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/09 15:48:05 by mben-zeh         ###   ########.fr       */
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
void ConsertToChar(const double &number)
{
    std::cout << "char: ";
    (((std::isnan(number) || std::isinf(number))&& std::cout << "impossible")
    || (!isprint(static_cast<int>(number)) && std::cout << "Non displayable")
    || std::cout << "'" << static_cast<char>(number)<< "'");
    std::cout << std::endl;
    
}
void ConsertToInt (const double &number)
{
    std::cout << "int: ";
    (((std::isnan(number) || isinf(number)) && std::cout << "impossible")
    || std::cout << static_cast<int>(number));
    std::cout << std::endl;
}

void ConsertToFloat (const double &number)
{
    std::cout << "float: ";
    ((std::isnan(number) && std::cout << "nan") || (std::isinf(number) && std::cout << "inf")
    || std::cout << static_cast<int>(number));
    std::cout << "f" <<  std::endl;
}
void ConsertToDouble (const double &number)
{
    std::cout << "double: ";
    ((std::isnan(number) && std::cout << "nan")
    ||(std::isinf(number) && std::cout << "inf")
    || std::cout << static_cast<int>(number));
    std::cout << std::endl;
}

bool isAllDigit(const std::string &str)
{   
    int i;
    int p;

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
        if(str[i]< '0' || str[i]> '9' || ( str[i]== '.' && p++))
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
    
    std::stringstream ss(str);
    ss >> number;
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
    ConsertToChar(number);
    ConsertToInt(number);
    ConsertToFloat(number);
    ConsertToDouble(number);
}