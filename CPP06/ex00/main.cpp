/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 04:26:53 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/09 14:29:59 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <limits>

// int main(void)
// {
//      int number1 ;
//     double number2 = 9.76;
//     number1 = number2;
//     std::cout <<"Int : "<<number1 <<std::endl;
//     std::cout <<"double : "<<number2 <<std::endl;
// }
int main(int ac,char **av)
{
    (void)av;
    //double number;
    if(ac != 2)
    {
        std::cerr << "Invalid number of arguments" << std::endl;
        return (1);
    }
    //std::string str(av[1]);
    // std::stringstream ss((const std::string)std::string(av[1]));
    // ss >> number;
    // std::cout << "number :" << number << std::endl;
    try
    {
    ScalarConverter::convert(std::string(av[1]));
    }catch(const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return (0);
}