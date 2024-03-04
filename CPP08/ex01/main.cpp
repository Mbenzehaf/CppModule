/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:46:38 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/02 04:07:03 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
   Span sp = Span(10000);
   for(int i = 0; i < 10000 ; i++)
   {
      sp.addNumber(std::rand());
   }
   
   std::cout << sp.shortestSpan() << std::endl;
   std::cout << sp.longestSpan() << std::endl;
   return (0);
}
