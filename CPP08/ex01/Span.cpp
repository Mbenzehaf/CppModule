/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:51:42 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/29 07:19:33 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
Span::Span(void):_N(0)
{
  
}
Span::Span(unsigned int N):_N(N)
{
  
}
Span::Span(const Span &other)
{
  for(size_t i = 0; i < other._container.size() ;  i++)
  {
    this->_container.push_back(other._container.at(i)); 
  }
}
Span& Span::operator=(const Span &other)
{
  if(this != &other)
  {
    while (this->_container.size())
    {
      _container.pop_back();
    }
    for(size_t i = 0; i < other._container.size() ;  i++)
    {
    this->_container.push_back(other._container.at(i)); 
    }
  }
  return (*this);
}
Span::~Span()
{
  
}

void Span::addNumber(const int& Number)
{
}
int Span::shortestSpan(void)
{
  if(_container.size() <= 1)
  {
    throw std::runtime_error("no span can be found.");
  }
   return (*(std::min_element(_container.begin(),_container.end()) - 1 ) - *std::min_element(_container.begin(),_container.end()) );
}
int Span::longestSpan(void)
{
  if(_container.size() <= 1)
  {
    throw std::runtime_error("no span can be found.");
  }
  return (*std::max_element(_container.begin(),_container.end()) - *std::min_element(_container.begin(),_container.end()) );
}