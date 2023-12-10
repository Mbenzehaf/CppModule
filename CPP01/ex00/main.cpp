/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:19:16 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/08 01:11:39 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    //Zombie Zombie1("Foo");
    Zombie *Zombie2 = newZombie("Zombieman");
    Zombie2->announce();
    randomChump("Zombieman3");
    delete Zombie2;
}