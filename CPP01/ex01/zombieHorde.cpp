/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:18 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 02:11:53 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie;
    zombie = NULL;
    if(N <= 0)
        return (zombie);
    zombie = new Zombie[N];
    for(int i = 0;i < N ; i++)
        zombie[i].setname(name);
    return (zombie);
}