/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:31 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 04:34:38 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void):type("Default")
{
      std::cout << "Animal Default constructor called" << std::endl;
}
Animal::Animal(const std::string &_type):type(_type)
{
    std::cout << "Animal parameterized constructor called" << std::endl;
}
Animal::Animal(const Animal& other):type(other.type)
{
    *this = other;
     std::cout << "Animal Copy constructor called" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        type = other.type;
    }
    return (*this);
}
 std::string Animal::getType(void) const
 {
    return (type);
 }
void Animal::setType(const std::string &type)
{
    this->type = type; 
}
void Animal::makeSound() const
{
    std::cout << "Animal makeSound called" <<std::endl; 
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}