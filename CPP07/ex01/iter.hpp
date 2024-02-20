/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:26:34 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/20 08:55:19 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T1>

void iter(T1 *arr,const size_t &length,void(*fun)(const T1&))
{
    for (size_t i = 0; (arr) && (fun) && i < length; i++)
    {
        fun(arr[i]);
    }
}

template<typename T>

void Display(const T& var)
{
    std::cout << "==> : " << var << std::endl;
}