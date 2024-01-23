/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:39:23 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/06 03:35:25 by mben-zeh         ###   ########.fr       */
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