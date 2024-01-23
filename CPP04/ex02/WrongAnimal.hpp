/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:38:06 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 00:20:57 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class WrongAnimal
{
protected:
     std::string type;
public:
    WrongAnimal(void);
    WrongAnimal(const std::string &);
    WrongAnimal(const WrongAnimal&);
    std::string getType(void) const;
    void setType(const std::string &);
    void makeSound() const;
    WrongAnimal &operator=(const WrongAnimal&);
   ~WrongAnimal();
};

