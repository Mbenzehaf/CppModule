/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:34:10 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/19 00:12:32 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
  std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name):ClapTrap(name)
{
   this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called with parameters" << std::endl;
}
FragTrap::FragTrap(const FragTrap& o):ClapTrap(o._name)
{
  *this = o;
  std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap&o)
{
    if (this != &o)
  {
    this->_name = o._name;
    this->_hitPoint = o._hitPoint;
    this->_energyPoint = o._energyPoint;
    this->_attackDamage = o._attackDamage;
  }
  //std::cout << "FragTrap Copy assignment operator called" << std::endl;
  return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name <<  " requests a positive high five!" << std::endl;
}