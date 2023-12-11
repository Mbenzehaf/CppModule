/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:32 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 02:14:57 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N;
    Zombie *zombie;
    std::cin >> N;
    zombie = zombieHorde(N, "zombieman");
    for(int i = 0;i < N ;i++)
         zombie[i].announce();
    delete[] zombie;
     return (0);
}