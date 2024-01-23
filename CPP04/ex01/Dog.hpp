/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:20 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 06:28:03 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
class Dog:public Animal{
    private:
    Brain *brain;
    public:
    Dog(void);
    Dog(const Dog&);
    void makeSound() const;
    Dog& operator=(const Dog&);
    ~Dog(void);
};