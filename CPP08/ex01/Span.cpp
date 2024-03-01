/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:51:42 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/01 06:59:42 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void):maxSize(0)
{
    
}
Span::Span(unsigned int N):maxSize(N)
{
      
}
Span::Span(const Span &other):maxSize(other.maxSize),numbers(other.numbers)
{
    
}
Span& Span::operator=(const Span &other)
{
    if(this != &other)
    {
        maxSize = other.maxSize;
        numbers = other.numbers;
    }
    return (*this);
}
Span::~Span()
{
    
}

void Span::addNumber(const int& N)
{
    if(numbers.size() >= maxSize)
    {
        throw std::runtime_error("Cannot add more numbers");
    }
    numbers.push_back(N);
}
int Span::shortestSpan(void)
{
    if(maxSize < 2)
    {
        throw std::runtime_error("Cannot find span");
    }
    return (0);
}
int Span::longestSpan()
{
    if(maxSize < 2)
    {
        throw std::runtime_error("Cannot find span");
    }
    return (*std::max_element(numbers.begin(),numbers.end()) - *std::min_element(numbers.begin(),numbers.end()));
}