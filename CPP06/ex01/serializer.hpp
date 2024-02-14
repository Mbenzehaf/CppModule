/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:30:04 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:09 by mben-zeh         ###   ########.fr       */
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
private:
    Serializer(void); 
public:
    Serializer(const Serializer &);
    Serializer& operator=(const Serializer &);
    ~Serializer(void);
    
   static uintptr_t serialize(Data* ptr);
   static Data* deserialize(uintptr_t raw);
};
