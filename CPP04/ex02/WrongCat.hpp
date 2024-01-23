/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:37:53 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 04:35:35 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(const WrongCat&);
    void makeSound() const;
    WrongCat& operator=(const WrongCat&);
    ~WrongCat(void);
};
