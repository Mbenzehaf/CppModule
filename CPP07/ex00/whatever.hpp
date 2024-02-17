/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:28:01 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/15 12:55:30 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T& a ,T& b)
{
    T c = a;
    a = b;
    b = c;
}

template <typename T>
const T& min(const T& a,const T& b)
{
    return ((a < b)?a : b);
}

template <typename T>
const T& max(const T& a,const T& b)
{
    return ((a > b)?a : b);
}