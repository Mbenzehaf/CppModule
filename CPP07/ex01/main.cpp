/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:28:07 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/17 13:01:51 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    {
        int arr[] = {10,20,30,40,50};
        std::cout << "-------------int-------------" << std::endl;
        ::iter<int>(arr,5,Display);
    }
    
    {
        float arr[] = {10.1,20.2,30.3,40.4,50.5};
        std::cout << "-------------flaot-------------" << std::endl;
        ::iter<float>(arr,5,Display);
    }
    
    {
    std::string arr[] = {"AAAA","BBBB","CCCC","DDDD","EEEE"};
    std::cout << "------------string--------------" << std::endl;
    ::iter<std::string>(arr,5,Display);
    }
    return (0);
}