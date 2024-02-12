/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:30:04 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/10 12:46:14 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

typedef struct  s_data
{
    int a;
}Data;

class Serializer
{
public:
    Serializer(void);
    Serializer(const Serializer &);
    Serializer& operator=(const Serializer &);
    ~Serializer(void);

    
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};
