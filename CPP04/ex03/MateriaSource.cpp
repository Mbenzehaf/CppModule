/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:46:06 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/24 04:52:48 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    //std::cout << "MateriaSource Default constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
    }
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "MateriaSource Copy constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if(other._inventory[i])
            _inventory[i] = other._inventory[i];
        else
            _inventory[i] = NULL;
    }
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    //std::cout << "MateriaSource Copy assignment operator called" << std::endl;
     for (size_t i = 0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];
        if(other._inventory[i])
            _inventory[i] = other._inventory[i];
        else
            _inventory[i] = NULL;
    }
    return (*this);
}
void MateriaSource::learnMateria(AMateria* m)
{
    for (size_t i = 0;m && i < 4; i++)
    {
        if(_inventory[i] == NULL)
        {
            _inventory[i] = m->clone();
            break;
        }
    }
    if(m)
        delete m;
}
AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if(_inventory[i] && _inventory[i]->getType() == type)
        {
            return (_inventory[i]->clone());
        }
    }
    return (NULL);
}
MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];
    }
}