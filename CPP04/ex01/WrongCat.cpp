/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:38:27 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 02:53:05 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void):WrongAnimal("WrongCat")
{
     std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other.type)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat : Meow" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
      this->setType(other.type);
    }
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
     std::cout << "WrongCat destructor called" << std::endl;
}