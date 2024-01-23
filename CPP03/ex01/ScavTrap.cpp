/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 05:01:48 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/19 00:11:00 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 30;
  std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name):ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 30;
    std::cout << "ScavTrap constructor called with parameters" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& o):ClapTrap(o._name)
{
  *this = o;
  std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap&o)
{
    if (this != &o)
  {
    this->_name = o._name;
    this->_hitPoint = o._hitPoint;
    this->_energyPoint = o._energyPoint;
    this->_attackDamage = o._attackDamage;
  }
  //std::cout << "ScavTrap Copy assignment operator called" << std::endl;
  return (*this);
}
void ScavTrap::attack(const std::string &target)
{
  if(_hitPoint > 0 && _energyPoint > 0)
  {
    std::cout << "ScavTrap "<<_name<<" attacks "<<target<<", causing "<< _attackDamage << " points of damage!" << std::endl;
    _energyPoint--;
    return ;
  }
    std::cout << "ScavTrap " << _name << ((_hitPoint <= 0)?"is dead":"has no energy points :(") << std::endl;
  
}
ScavTrap::~ScavTrap(void)
{
      std::cout << "ScavTrap destructor called" << std::endl;
}
void ScavTrap::guardGate()
{
  std::cout  << "ScavTrap " << this->_name << "is now in Gate keeper mode :)" <<std::endl;
}