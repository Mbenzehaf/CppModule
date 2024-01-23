/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:24:06 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/19 00:10:20 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap bot("SC_BOT");
    ScavTrap bot1(bot);
    bot.attack("ENEMY");
    bot.takeDamage(5);
    bot.beRepaired(10);
    bot.guardGate();
    return (0);
}