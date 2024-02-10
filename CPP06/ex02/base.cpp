/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:34:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/10 15:55:15 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"

Base::~Base()
{
    
}

Base * generate(void)
{
    
    int random_number;
    srand(time(0));
    random_number = rand() % 3;
    if(random_number == 0)
        return (new A());
    else if (random_number == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base* p)
{
    if(A *a = dynamic_cast<A *>(p))
    {
        (void)a;
        std::cout << "type of the object pointed is : A" << std::endl;
    }else if (B *b = dynamic_cast<B *>(p))
    {
        (void)b;
        std::cout << "type of the object pointed is : B" << std::endl;   
    }else if (C *c = dynamic_cast<C *>(p))
    {
        (void)c;
        std::cout << "type of the object pointed is : C" << std::endl;
    }else
    {
        std::cout << "type of the object pointed is : Uknown" << std::endl;
    }
}

void identify(Base& p)
{
     (void) p;

    A &a = (A&)(p);
    (void)a;
    std::cout << "type of the object pointed is : A" << std::endl;
    // if(A &a = dynamic_cast<A &>(P))
    // {
    //     (void)a;
    //     std::cout << "type of the object pointed is : A" << std::endl;
    // }else if (B &b = dynamic_cast<B &>(p))
    // {
    //     (void)b;
    //     std::cout << "type of the object pointed is : B" << std::endl;   
    // }else if (C &c = dynamic_cast<C &>(p))
    // {
    //     (void)c;
    //     std::cout << "type of the object pointed is : C" << std::endl;
    // }else
    // {
    //     std::cout << "type of the object pointed is : Uknown" << std::endl;
    // }
}