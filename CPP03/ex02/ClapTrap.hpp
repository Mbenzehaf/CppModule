/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:24:03 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/16 05:02:55 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__
#include <iostream>

//base class or super class
//mamber protected => can access from the (derived class and the same class)
class ClapTrap{
protected:
    std::string _name;
    unsigned int _hitPoint;
    unsigned int _energyPoint;
    unsigned int _attackDamage;
public:
    ClapTrap(void);
    ClapTrap(const std::string &);
    ClapTrap(const ClapTrap&);
    ClapTrap &operator=(const ClapTrap&);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif