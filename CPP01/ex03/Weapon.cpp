/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:39:23 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/10 01:48:24 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}
Weapon::~Weapon(void)
{

}
Weapon::Weapon(std::string type)
{
    this->type = type;
}
void Weapon::settype(std::string &type)
{
    this->type = type;
}
std::string Weapon::gettype(void)
{
    return (this->type);
}