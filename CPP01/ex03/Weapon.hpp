/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:39:54 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 05:24:03 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__
#include <iostream>

class Weapon
{
    std::string type;
    public :
    Weapon(const std::string &);
    std::string getType(void);
    void setType(const std::string &);
};
#endif