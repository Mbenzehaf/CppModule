/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:27 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 06:40:43 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):Animal("Cat"),brain(new Brain())
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other):Animal(other.type),brain(new Brain(*other.brain))
{
     std::cout << "Cat Copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{

    std::cout << "Cat Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        delete brain;
        brain = new Brain(*other.brain);
        type = other.type;
    }
    return (*this);
}
void Cat::makeSound() const
{
    std::cout << "Meow" << "\U0001F431"<<std::endl; 
}
Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}