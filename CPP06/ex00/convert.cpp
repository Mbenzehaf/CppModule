/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:54:52 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/06 07:07:43 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

ScalarConverter::ScalarConverter()
{

}
ScalarConverter(const ScalarConverter &other)
{   
    (void)other;
}
ScalarConverter& ScalarConverter::operator(const ScalarConverter &)
{
    (void)other;
    return (*this);
}
ScalarConverter::~ScalarConverter()
{
    
}

static char ScalarConverter::convert(const std::string &str)
{
    // int num;
    // std::istringstream iss(str);
    // iss >> num;
    // return ((char)num);
}
static int ScalarConverter::convert(const std::string &str)
{
    
}
static float ScalarConverter::convert(const std::string &str)
{

}
static double ScalarConverter::convert(const std::string &str)
{

}