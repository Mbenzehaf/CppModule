/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:44:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/06 04:03:22 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << BOLDCYAN << "[ DEBUG ]\nDebug message......"<<RESET<<std::endl;
}

void Harl::info(void)
{
    std::cout << BOLDGREEN << "[ INFO ]\nInfo message......"<<RESET<<std::endl;
}

void Harl::warning(void)
{
    std::cout << BOLDYELLOW << "[ WARNING ]\nWarning message......"<<RESET<<std::endl;
}

void Harl::error(void)
{
    std::cout << BOLDRED << "[ ERROR ]\nError message......"<<RESET<<std::endl;
}
void Harl::complain(std::string level)
{
    std:: string lvl[] = {"DEBUG","INFO","WARNING","ERROR"};
    void (Harl::*fun[])()= {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    for(int i = 0;(i < 4);i++)
    {
        if(lvl[i] == level)
            return ((this->*fun[i])());
    }
    std::cout << BOLDBLUE<< "OOPS! INVALID LEVEL. PLEASE ENTER A VALID LEVEL (DEBUG, ERROR, INFO, WARNING)."<<RESET<<std::endl;
}