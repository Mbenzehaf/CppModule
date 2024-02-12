/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:30:15 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/10 12:44:43 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

int main(void)
{
    Serializer serializer;
    Data * ptr;
    
    ptr = new Data();
    std::cout << "ptr : " << ptr <<std::endl ;
    std::cout << "serialize : " << serializer.serialize(ptr) <<std::endl ;
    std::cout << "deserialize : " << serializer.deserialize(serializer.serialize(ptr) ) <<std::endl ;
    
    delete ptr;
}