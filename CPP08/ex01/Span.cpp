/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:33:47 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/09 14:47:05 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void):max_Size(0)
{
    //std::cout << "Span Default constructor called" << std::endl;
}
Span::Span(unsigned int n):max_Size(n)
{
    //std::cout << "Span parameterized constructor called" << std::endl;
}
Span::Span(const Span &other)
{
    *this = other; 
    //std::cout << "Span Copy constructor called" << std::endl;
}
Span& Span::operator=(const Span &other)
{
    //std::cout << "Span Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        max_Size = other.max_Size;
        numbers = other.numbers;
    }
    return (*this);
} 
Span::~Span()
{
    //std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(const int & number)
{
    if(max_Size <= this->numbers.size())
    {
        throw std::runtime_error("Span is full");
    }
    numbers.push_back(number);
}

void Span::addNumbers(const std::vector<int>& numbers)
{
    if(numbers.size() + this->numbers.size() > max_Size)
    {
        throw std::runtime_error("Span is full");
    }
    this->numbers.insert(this->numbers.end(),numbers.begin(),numbers.end());
}


unsigned int Span::shortestSpan() const
{
    unsigned int minSpin;
    if(numbers.size() >= 2)
    {
        std::vector<int> temp(numbers);
        std::sort(temp.begin(),temp.end());
        std::vector<int>::iterator it ;
        for(it = temp.begin() + 1 , minSpin = (*it - *(it-1));it != temp.end();it++)
        {
            if(minSpin > static_cast<unsigned int>(*it - *(it-1)))
            {
                minSpin = (*it - *(it-1));
            }
        }
    }else
    {
        throw std::runtime_error("Span is empty");
    }
    return (minSpin);
}
unsigned int Span::longestSpan() const
{
    if(numbers.size() >= 2)
    {
        int max,min;
        max = *std::max_element(numbers.begin(),numbers.end());
        min = *std::min_element(numbers.begin(),numbers.end());
        return (max - min);
    }else
    {
        throw std::runtime_error("Span is empty");
    }
}