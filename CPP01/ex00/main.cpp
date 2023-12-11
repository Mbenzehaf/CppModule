/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:19:16 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 01:12:24 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("Foo");
    zombie1.announce();
    Zombie *zombie2 = newZombie("Zombieman");
    zombie2->announce();
    randomChump("ryuma");
    delete zombie2;
    return (0);
}