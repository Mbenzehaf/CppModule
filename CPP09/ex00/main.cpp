/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:44:42 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 09:44:44 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int ac,char **av)
{   
    try
    {
        if(ac == 2 && !std::string(av[1]).empty())
        {
            BitcoinExchange bitcoinExchange;
            bitcoinExchange.run(av[1]);
        }else
        {
            throw std::runtime_error("could not open file.");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
}