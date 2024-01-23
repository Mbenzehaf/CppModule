/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:29 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 02:45:06 by mben-zeh         ###   ########.fr       */
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
    
    virtual void makeSound() const;
    Animal &operator=(const Animal&);
    virtual ~Animal();
};
