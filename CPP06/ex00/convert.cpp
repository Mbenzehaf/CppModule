/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:54:52 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/07 12:06:28 by mben-zeh         ###   ########.fr       */
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
    ((std::isnan(number) && std::cout << "impossible")
    || (!isprint(static_cast<int>(number)) && std::cout << "Non displayable")
    || std::cout << "'" << static_cast<char>(number)<< "'");
    std::cout << std::endl;
    
}
void ConsertToInt (const double &number)
{
    std::cout << "int: ";
    ((std::isnan(number) && std::cout << "impossible")
    || std::cout << static_cast<int>(number));
    std::cout << std::endl;
}

void ConsertToFloat (const double &number)
{
    std::cout << "float: ";
    ((std::isnan(number) && std::cout << "nanf")
    || std::cout << static_cast<int>(number));
    std::cout << std::endl;
}
void ConsertToDouble (const double &number)
{
    std::cout << "double: ";
    ((std::isnan(number) && std::cout << "nan")
    || std::cout << static_cast<int>(number));
    std::cout << std::endl;
}

void ScalarConverter::convert(const std::string & str)
{
    double number;
    
    std::stringstream ss(str);
    ss >> number;
    
}