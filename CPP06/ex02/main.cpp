/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:33:52 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/12 12:24:53 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"
class A1:public Base{
    
};
class B2:public Base{
    
};
class C3:public Base{
    
};

int main(void)
{
    // Base *p1 = new Base();
    // Base *p2 = new A();
    // Base *p3 = new B();
    // Base *p4 = new C();
    
    // identify(p1);
    // identify(p2);
    // identify(p3);
    // identify(p4);
    // std::cout << "----------------------------" << std::endl;
    // identify(*p1);
    // identify(*p2);
    // identify(*p3);
    // identify(*p4);
    A1 *a = new A1();
    Base *G; 
    G = static_cast<A1 *>(a);
    std::cout << "a : " << a <<std::endl;
    //std::cout << "b : " << b <<std::endl;
    (void)b; (void)a;
}