/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 04:46:33 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main(void)
{
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound(); //will output the Dog sound!
meta->makeSound();
delete meta;
delete j;
delete i;
}

{
WrongAnimal* meta = new  WrongAnimal();
WrongAnimal* i = new  WrongCat();
std::cout << i->getType() << " " << std::endl;
i->makeSound();
meta->makeSound();
delete meta;
delete i;
}
return (0);
}