/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:39:23 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 05:23:58 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string & type)
{
    this->type = type;
}
void Weapon::setType(const std::string &type)
{
    this->type = type;
}
std::string Weapon::getType(void)
{
    return (this->type);
}