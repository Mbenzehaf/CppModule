/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:43:42 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 09:43:44 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac,char **av)
{
    try
    {
        if (ac > 1)
        {
            PmergeMe P;
            P.execution(&av[1]);
        }
        else
            throw std::runtime_error("Usage : ./PmergeMe [positive integer sequence]");
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error : " << e.what() << '\n';
        return (1);
    }
}