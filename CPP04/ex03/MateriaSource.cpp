/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:46:06 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/23 06:31:48 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    //std::cout << "MateriaSource Default constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        bag[i] = NULL;
    }
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "MateriaSource Copy constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if(other.bag[i])
            bag[i] = other.bag[i];
        else
            bag[i] = NULL;
    }
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    //std::cout << "MateriaSource Copy assignment operator called" << std::endl;
     for (size_t i = 0; i < 4; i++)
    {
        if(bag[i])
            delete bag[i];
        if(other.bag[i])
            bag[i] = other.bag[i];
        else
            bag[i] = NULL;
    }
    return (*this);
}
void MateriaSource::learnMateria(AMateria* m)
{
    for (size_t i = 0;m && i < 4; i++)
    {
        if(bag[i] == NULL)
        {
            bag[i] = m->clone();
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
        if(bag[i] && bag[i]->getType() == type)
        {
            return (bag[i]->clone());
        }
    }
    return (NULL);
}
MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if(bag[i])
            delete bag[i];
    }
    
}