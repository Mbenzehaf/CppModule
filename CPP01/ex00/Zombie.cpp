/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:19:23 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 01:11:58 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string& name)
{
    this->name = name;
}
Zombie::~Zombie(void)
{
    std::cout << name << " : is destroyed!"<<std::endl;
}
void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}