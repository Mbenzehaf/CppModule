/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:47:34 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/09 11:23:11 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>
#include <list>

template<typename T >
class MutantStack : public std::stack<T>
{
    public :
    typedef typename std::deque<T>::iterator iterator;
    MutantStack(void){};
    MutantStack(const MutantStack &other)
    {
        *this = other;
    };
    MutantStack& operator=(const MutantStack &other)
    {
        if(this != &other)
        {
            this->c = other.c;
        }
        return (*this);
    };

    iterator begin(void)
    {
        return (this->c.begin());
    }
    iterator end(void)
    {
        return (this->c.end());
    }
    ~MutantStack(){};
};