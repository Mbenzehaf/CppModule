/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 00:00:02 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/07 09:45:51 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <stack>
#include <algorithm>
#include <string>
template <typename T>
void easyfind(T container, int value)
{
    if(std::find(container.begin(),container.end(),value) != container.end())
    {
        std::cout <<"Value < " <<  value <<" > found in the container" << std::endl;
    }else
    {
        std::string str ;
        std::stringstream ss;
        ss << value;
        ss >> str;
        throw std::runtime_error("Value < "+ str +" > not found in the container");
    }
}