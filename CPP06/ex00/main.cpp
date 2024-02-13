/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 04:26:53 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/13 06:54:18 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
int main(int ac,char **av)
{
    if(ac != 2)
    {
        std::cerr << "Invalid number of arguments" << std::endl;
        return (1);
    }
    try
    {
        ScalarConverter::convert(std::string(av[1]));
    }catch(const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return (0);
}