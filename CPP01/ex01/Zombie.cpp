/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:26 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 01:49:40 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}
Zombie::Zombie(const std::string& name)
{
    this->name = name;
}
Zombie::~Zombie(void)
{
    std::cout << name << " : is destroyed!"<<std::endl;
}

void Zombie::setname(const std::string &name)
{
    this->name = name;
}
void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}