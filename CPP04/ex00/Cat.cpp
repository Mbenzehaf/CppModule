/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:27 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 00:05:31 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}
// Cat::Cat(const std::string &_type):type(_type)
// {
//     std::cout << "Cat constructor called with parameters" << std::endl;
// }
Cat::Cat(const Cat& other):Animal(other.type)
{
    *this = other;
     std::cout << "Cat Copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if(&other != this)
    {
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
    std::cout << "Cat destructor called" << std::endl;
}