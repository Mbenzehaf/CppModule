/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 06:00:06 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/23 19:02:32 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    //Fixed a;
    // Fixed  b(10);
    // Fixed  c(42.42f);
   // Fixed const d(b);
   int a=1;
   //std::cout << "d is " << sum(10,20) << " as integer" << std::endl;
    // a = Fixed(1234.4321f);
    int *ptr=&(++a);
 std::cout << "a is " << &a << std::endl;
  std::cout << "a is " << ptr << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;

    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}