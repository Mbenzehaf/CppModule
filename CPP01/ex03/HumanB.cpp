/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 01:09:33 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 05:21:43 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
    this->name = name;
    this->weapon = NULL;
}
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
void HumanB::attack(void)
{
    std::cout << this->name<<" attacks with " ;
    if(this->weapon)
        std::cout << "their " << this->weapon->getType();
    else 
        std::cout << "bare hands";
    std::cout<<std::endl;
}