/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:06:55 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/23 06:42:45 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void):AMateria("cure")
{
    //std::cout << "Cure Default constructor called" << std::endl;
}
Cure::Cure(const Cure& other):AMateria(other._type)
{
    //std::cout << "Cure Copy constructor called" << std::endl;
}
Cure& Cure::operator=(const Cure& other)
{
    //std::cout << "Ice Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        this->_type = other._type;
    }
    return (*this);
}
AMateria* Cure::clone() const
{
    return (new Cure());
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<<target.getName()<<"'s wounds *" << std::endl;
}
Cure::~Cure()
{
    
}