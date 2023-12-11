/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:34:16 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 04:52:55 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__
#include "Weapon.hpp"

class HumanA
{
    std::string name;
    Weapon &weapon;
    public:
    HumanA(const std::string &,Weapon &);
    void attack();
};
#endif