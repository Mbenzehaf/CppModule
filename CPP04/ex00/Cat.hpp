/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:12 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 04:35:55 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
class Cat:public Animal{
    public:
    Cat(void);
    Cat(const Cat&);
    void makeSound() const;
    Cat& operator=(const Cat&);
    ~Cat(void);
};
