/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:22 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 06:59:17 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog(void):Animal("Dog"),brain(new Brain())
{
    std::cout << "Dog Default constructor called" << std::endl;
}
Dog::Dog(const Dog& other):Animal(other.type),brain(new Brain(*other.brain))
{
    std::cout << "Dog Copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        delete brain;
        brain = new Brain(*other.brain);
        type = other.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof" <<  "\U0001F436" <<std::endl; 
}
Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}