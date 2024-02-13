/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:55:07 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/13 06:03:19 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdexcept>
#include <limits>
#include <iomanip>
#include <cstdlib>
class ScalarConverter
{
    public :
    //Orthodox Canonical Form
    ScalarConverter();
    ScalarConverter(const ScalarConverter &);
    ScalarConverter& operator=(const ScalarConverter &);
    ~ScalarConverter();

    static void convert(const std::string &);
};