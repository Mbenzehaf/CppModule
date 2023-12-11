/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 01:08:48 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 04:59:08 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__
#include "Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon *weapon;
    public:
    HumanB(const std::string &);
    void setWeapon(Weapon &);
    void attack();
};
#endif