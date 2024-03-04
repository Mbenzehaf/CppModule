/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:54:14 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/04 10:54:21 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"
#include <vector>
#include <algorithm>
#include <stack>
#include <iterator>
#include <deque>
#include <list>

template <typename _Tp>

class MutantStack: public std::stack<_Tp>
{
private:
    /* data */
public:
    MutantStack(/* args */){};
    MutantStack(const MutantStack &){};
    MutantStack& operator=(const MutantStack &)
    {
        return (*this);
    };

    typedef typename std::deque<_Tp>::iterator iterator;
    iterator begin(void)
    {
     return this->c.begin();   
    }
    iterator end(void)
    {
     return this->c.end();   
    }
    ~MutantStack(){};
};
