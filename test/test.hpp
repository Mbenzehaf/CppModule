/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:07:54 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/23 16:15:00 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <cstring>
#include <cmath>
#include <list>
#include <vector>
#include <bitset>
class C1{
    int var;
    public :
    C1(void);
    C1(int);
    C1(const C1 &);
    C1& operator=(const C1&);
    ~C1(void);
    //C1& operator+(const C1& );
    int getvar(void);
};
#endif