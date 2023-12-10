/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:19:23 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/08 01:00:42 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie::Zombie(std::string &name)
{
    this->name = name;
}
Zombie::~Zombie(void)
{
    std::cout << name << " is destroyed!"<<std::endl;
}