/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:51:29 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/01 03:44:04 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>  
#include <iterator>
#include "algorithm"

class Span{
  private:
  std::vector<int> numbers;
  unsigned int maxSize;
  Span(void);
  public:
  Span(unsigned int N);
  Span(const Span &);
  Span& operator=(const Span &);
  ~Span();

  void addNumber(const int &);
  int shortestSpan();
  int longestSpan();
};