/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:42:07 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/23 06:21:03 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void):_type("Default")
{
    //std::cout << "AMateria Default constructor called" << std::endl;
}
AMateria::AMateria(std::string const & type):_type(type)
{
   //std::cout << "AMateria parameterized constructor called" << std::endl;
}
AMateria::AMateria(const AMateria& other):_type(other._type)
{
    //std::cout << "AMateria Copy constructor called" << std::endl;
}
AMateria& AMateria::operator=(const AMateria& other)
{
    if(&other != this)
    {
        this->_type = other._type;
    }
    //std::cout << "AMateria Copy assignment operator called" << std::endl;
    return (*this);
}
void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria member function use called of "<< target.getName()<< std::endl;
}
std::string const & AMateria::getType() const
{
    return (this->_type);
}
AMateria::~AMateria()
{
    
}