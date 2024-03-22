/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:44:30 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 09:44:33 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac == 2)
        {
            RPN R;
            R.run(av[1]);
        }
        else
            throw std::runtime_error(" : Usage : ./RPN [Polish mathematical expression]");
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error" << e.what() << '\n';
        return (1);
    }
    return (0);
}