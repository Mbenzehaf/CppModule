/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:55:07 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/06 05:53:11 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <sstream>
class ScalarConverter
{
    public :
    //Orthodox Canonical Form
    ScalarConverter();
    ScalarConverter(const ScalarConverter &);
    ScalarConverter& operator(const ScalarConverter &);
    ~ScalarConverter();

    static char convert(const std::string &);
    static int convert(const std::string &);
    static float convert(const std::string &);
    static double convert(const std::string &);
};