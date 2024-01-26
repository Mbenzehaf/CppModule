/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:06:26 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/24 03:56:32 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice(void):AMateria("ice")
{
    //std::cout << "Ice Default constructor called" << std::endl;
}
Ice::Ice(const Ice& other):AMateria(other._type)
{
    //std::cout << "Ice Copy constructor called" << std::endl;
}
Ice& Ice::operator=(const Ice& other)
{
    //std::cout << "Ice Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        this->_type = other._type;
    }
    return (*this);
}
AMateria* Ice::clone() const
{
    return (new Ice());
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<<target.getName()<<"*" << std::endl;
}
Ice::~Ice()
{
    
}
