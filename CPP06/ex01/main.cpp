/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:30:15 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:32 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

int main(void)
{
    Data * ptr;
    
    ptr = new Data();
    std::cout << "ptr : " << ptr <<std::endl ;
    std::cout << "serialize : " << Serializer::serialize(ptr) <<std::endl ;
    std::cout << "deserialize : " << Serializer::deserialize(Serializer::serialize(ptr) ) <<std::endl ;
    
    delete ptr;
}