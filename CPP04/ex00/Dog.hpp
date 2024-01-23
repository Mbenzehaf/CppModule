/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:20 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 03:18:19 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
class Dog:public Animal{
    public:
    Dog(void);
    Dog(const Dog&);
    void makeSound() const;
    Dog& operator=(const Dog&);
    ~Dog(void);
};