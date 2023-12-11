/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:39:35 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 04:55:12 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << this->name<<" attacks with their " << this->weapon.getType()<<std::endl;
}

HumanA::HumanA(const std::string &name ,Weapon& weapon):name(name),weapon(weapon)
{
    
}