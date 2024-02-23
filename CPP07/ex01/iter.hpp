/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:26:34 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/23 01:56:15 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T1, typename T2>
void iter(T1 *arr,const size_t &length,void(*fun)(T2))
{
    for (size_t i = 0; (arr) && (fun) && i < length; i++)
    {
        fun(arr[i]);
    }
}

template<typename T1>
void Display(T1 var)
{
    std::cout << "==> : " << var << std::endl;
}