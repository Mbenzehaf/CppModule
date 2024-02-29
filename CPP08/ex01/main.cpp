/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:46:38 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/29 06:11:57 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
   std::vector<int> v;
   v.push_back(6);
   v.push_back(3);
   v.push_back(17);
   v.push_back(9);
   v.push_back(11);

   std::sort(v.begin(),v.end());
   std::cout << *v.begin() << std::endl;
}
