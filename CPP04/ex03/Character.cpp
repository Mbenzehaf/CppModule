/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:33:18 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/23 08:46:44 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character(void):_name("default")
{
    //std::cout << "Character Default constructor called" << std::endl;
    for(size_t i = 0;i< 4 ; i++)
    {
        _inventory[i] = NULL;
        _saveinv[i] = NULL;
    }
}
Character::Character(const Character &other):_name(other._name)
{
    //std::cout << "Character Copy constructor called" << std::endl;
    for(size_t i=0;i<4;i++)
    {
        if(other._inventory[i] != NULL)
        {
            _inventory[i] = other._inventory[i]->clone();
        }else
        {
            _inventory[i] = NULL;
        }
        _saveinv[i] = NULL;
    }
}
Character::Character(const std::string &name):_name(name)
{
    //std::cout << "Character parameterized constructor called" << std::endl;
    for(size_t i = 0;i< 4 ; i++)
    {
        _inventory[i] = NULL;
        _saveinv[i] = NULL;
    }
}
Character& Character::operator=(const Character &other)
{
    //std::cout << "Character Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        this->_name = other._name;
        for(size_t i=0;i<4;i++)
        {
        if(_inventory[i])
            delete _inventory[i];
        _inventory[i] = NULL;
        if(other._inventory[i] != NULL)
            _inventory[i] = other._inventory[i]->clone();
        }
    }
    return (*this);
}
std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    int idx;
    idx = -1;
    for (size_t i = 0; i < 4; i++)
    {
        if(_saveinv[i])
           { delete _saveinv[i];
           _saveinv[i]=NULL;
           }
    }
    for (size_t i = 0;m && i < 4; i++)
    {
        if(m == _inventory[i])
            return ;
        else if(idx == -1 && !_inventory[i])
            idx = i;
    }
    if(m &&idx >= 0 &&  _inventory[idx]== NULL)
        {
            _inventory[idx] = m;
            return ;
        }
    if(m)
        delete m;
}
void Character::unequip(int idx)
{
    if(idx < 4 && idx >= 0 && _inventory[idx])
    {
        //delete _inventory[idx];
        for (size_t i = 0; i < 4; i++)
        {
        if(!_saveinv[i] ||(_inventory[idx] ==  _saveinv[i]))
            {
                _saveinv[i] = _inventory[idx];
                break;
            }
        }
        _inventory[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter& target)
{
    if(idx < 4 && idx >= 0 && _inventory[idx])
    {
        _inventory[idx]->use(target);
    }
}
Character::~Character(void)
{
    for (size_t i = 0; i < 4; i++)
    {
        if(_saveinv[i])
        {
            delete _saveinv[i];
        }
       if(_inventory[i])
       {
        delete _inventory[i];
       }
    }
    
}