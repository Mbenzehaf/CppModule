/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:44:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/06 04:02:51 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << BOLDCYAN << "[ DEBUG ]\nDebug message......" << RESET << std::endl;
}

void Harl::info(void)
{
    std::cout << BOLDGREEN << "[ INFO ]\nInfo message......" << RESET << std::endl;
}

void Harl::warning(void)
{
    std::cout << BOLDYELLOW << "[ WARNING ]\nWarning message......" << RESET << std::endl;
}

void Harl::error(void)
{
    std::cout << BOLDRED << "[ ERROR ]\nError message......" << RESET << std::endl;
}
void Harl::complain(std::string level)
{
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
    {
        std::cout << BOLDWHITE << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }
    switch (level[0])
    {
    case 'D':
    {
        debug();
        break;
    }
    case 'I':
    {
        info();
        break;
    }
    case 'W':
    {
        warning();
        break;
    }
    case 'E':
    {
        error();
        break;
    }
    default:
    {

        break;
    }
    }
}