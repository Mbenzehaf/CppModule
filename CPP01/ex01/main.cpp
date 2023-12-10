/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:32 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/09 01:32:52 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N;
    Zombie *Zombies;
    std :: cin >> N;
    Zombies = zombieHorde(N,"mohammed");
    for(int i = 0;i < N ;i++)
        Zombies[i].announce();
    delete[] Zombies;
    return (0);
}