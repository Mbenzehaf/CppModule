/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:07:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/22 11:05:43 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

C1::C1(void):var(5)
{
    std::cout << "Default constructor  called" << std::endl;
}

C1::C1(int a):var(a)
{
    std::cout << "Constructor with a member initializer list" << std::endl;
}
C1::C1(const C1 & C):var(C.var)
{
    std::cout << "Copy constructor  called" << std::endl;
}
C1& C1::operator=(const C1& C)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->var = C.var;
    return (*this);
}
C1::~C1(void)
{
    std::cout << "Destructor called" << std::endl;
}
// C1& C1::operator+(const C1& o1)
// {
//     var = o1.var + var;
//     return (*this);
// }

int C1::getvar(void)
{
    return (this->var);
}
