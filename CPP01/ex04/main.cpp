/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 05:34:03 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/06 04:02:16 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        sed(std::string(av[1]),std::string(av[2]),std::string(av[3]));
    }
    else
    {
        std::cerr << BOLDRED << "Usage: " << av[0] << " <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    return (0);
}

