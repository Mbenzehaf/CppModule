/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:38:18 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 04:35:08 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(void):type("Default")
{
     std::cout << "WrongAnimal Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const std::string &_type):type(_type)
{
     std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other):type(other.type)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
}
std::string WrongAnimal::getType(void) const 
{
    return (type);
}
void WrongAnimal::setType(const std::string &type)
{
    this->type = type;
}
void WrongAnimal::makeSound() const 
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
     std::cout << "WrongAnimal destructor called" << std::endl;
}