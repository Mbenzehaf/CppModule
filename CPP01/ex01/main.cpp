/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:32 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/06 03:00:07 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie ;
    int N = 5;
    zombie = zombieHorde(N, "zombieman");
    for(int i = 0;i < N ;i++)
         zombie[i].announce();
    delete[] zombie;
     return (0);
}