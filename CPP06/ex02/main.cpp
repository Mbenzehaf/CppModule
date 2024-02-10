/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:33:52 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/10 14:02:46 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"

int main(void)
{
    Base *p1 = new Base();
    Base *p2 = new A();
    Base *p3 = new B();
    Base *p4 = new C();

    identify(p1);
    identify(p2);
    identify(p3);
    identify(p4);
}