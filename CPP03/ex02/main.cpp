/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:24:06 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/16 05:07:36 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap bot("FR_BOT");
    bot.attack("ENEMY");
    bot.takeDamage(5);
    bot.beRepaired(10);
    bot.highFivesGuys();
    return (0);
}