/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:28:07 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/23 01:44:34 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    {
        int arr[] = {0,1,2,3,4,42,42,42,42,42};
        std::cout << "-------------int-------------" << std::endl;
        ::iter<int>(arr,10,Display<int>);
    }
    {
        float arr[] = {10.1,20.2,30.3,40.4,50.5};
        std::cout << "-------------flaot-------------" << std::endl;
        ::iter<float>(arr,5,Display<float>);
    }
    
    {
    std::string arr[] = {"AAAA","BBBB","CCCC","DDDD","EEEE"};
    std::cout << "------------string--------------" << std::endl;
    ::iter<std::string>(arr,5,Display<std::string>);
    }
    return (0);
}