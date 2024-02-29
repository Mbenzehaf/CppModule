/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:44:55 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/28 03:54:26 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
template<typename T>
void easyfind(const T &container,int value)
{
    if(std::find(container.begin(),container.end(),value) == container.end())
    {
        throw std::runtime_error("Value not found!");
    }
    std::cout << "Value found!" << std::endl;
}