/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:29 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 08:37:00 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Animal
{
protected:
     std::string type;
public:
    Animal(void);
    Animal(const std::string &);
    Animal(const Animal&);
    std::string getType(void) const;
    void setType(const std::string &);
    
    virtual void makeSound() const = 0;
    Animal &operator=(const Animal&);
    virtual ~Animal();
};
