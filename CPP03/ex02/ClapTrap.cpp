/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:24:00 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/19 00:22:06 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"),_hitPoint(10), _energyPoint(10), _attackDamage(0)
{
  std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name),_hitPoint(10), _energyPoint(10),_attackDamage(0)
{
  std::cout << "ClapTrap constructor called with parameters" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &o)
{
  *this = o;
  std::cout << "ClapTrap Copy constructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &o)
{
  if (this != &o)
  {
    this->_name = o._name;
    this->_hitPoint = o._hitPoint;
    this->_energyPoint = o._energyPoint;
    this->_attackDamage = o._attackDamage;
  }
  //std::cout << "ClapTrap Copy assignment operator called" << std::endl;
  return (*this);
}
ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap destructor called" << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
  if(_hitPoint > 0 && _energyPoint > 0)
  {
    std::cout << "ClapTrap "<<_name<<" attacks "<<target<<", causing "<< _attackDamage << " points of damage!" << std::endl;
    _energyPoint--;
    return ;
  }
    std::cout << "ClapTrap " << _name << ((_hitPoint <= 0)?"is dead":"has no energy points :(") << std::endl;
  
}
void ClapTrap::takeDamage(unsigned int amount)
{
   if((_hitPoint - amount)>= 0)
  {
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
    _hitPoint -= amount;
    return ;
  }
   std::cout << "ClapTrap " << this->_name << " is dead :("<< std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
   if(_hitPoint > 0 && _energyPoint > 0)
  {
      std::cout << "ClapTrap " << _name << " takes " << amount << " Hit points" << std::endl;
      _hitPoint += amount;
      _energyPoint--;
    return ;
  }
    std::cout << "ClapTrap " << _name << ((_hitPoint <= 0)?"is dead":"has no energy points") <<":(" << std::endl;
}
