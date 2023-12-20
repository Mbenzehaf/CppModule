/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:07:54 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/14 06:44:29 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <cstring>
#include <cmath>
#include <list>
#include <vector>

class Add{
    private :
    int a;
    public :
    int b;
    int geta(void)
    {
        return (a);
    };
    protected:
    int c;
};
#endif