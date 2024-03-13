/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:33:44 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/09 12:40:02 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <cmath>

class Span
{
private:
    unsigned int max_Size;
    std::vector<int> numbers;
    Span(void);
public:
    Span(unsigned int);
    Span(const Span &);
    Span& operator=(const Span &);
    void addNumber(const int & );
    
    void addNumbers(const std::vector<int>& );
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
    ~Span();
};

