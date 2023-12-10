/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:26 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/09 01:23:37 by mben-zeh         ###   ########.fr       */
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
Zombie::Zombie(void)
{
    ;
}
void Zombie::setName(std::string &name)
{
    this->name = name;
}
Zombie::~Zombie(void)
{
    std::cout << name << " is destroyed!"<<std::endl;
}