/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:18 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/09 01:32:13 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* Zombies = new Zombie[N];
    for(int i = 0;i < N; i++)
    {
        name.append("*");
        Zombies[i].setName(name);
    }
    return (Zombies);
}