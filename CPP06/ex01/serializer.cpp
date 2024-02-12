/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:30:08 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/12 12:03:34 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"
Serializer::Serializer(void)
{
    //std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
    (void)other;
    //std::cout << "Serializer Copy constructor called" << std::endl;
}

Serializer& Serializer::operator=(const Serializer &other)
{
    (void)other;
    //std::cout << "Serializer Copy assignment operator called" << std::endl;
    return (*this);
}

Serializer::~Serializer(void)
{
    //std::cout << "Serializer destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}