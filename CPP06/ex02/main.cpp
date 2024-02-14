/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:33:52 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/14 11:06:52 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"

int main(void)
{
    Base *base[]={new Base,new A,new B,new C};
    for (size_t i = 0; i < 4; i++)
    {
        identify(base[i]);
    }
    std::cout << "----------------------------" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        identify(*base[i]);
    }
    
    for (size_t i = 0; i < 4; i++)
    {
        delete base[i];
    }
    return 0;
}