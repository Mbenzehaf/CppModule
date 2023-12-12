/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 05:34:03 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/12 06:25:49 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string FileName(av[1]);
        std::string S1(av[2]);
        std::string S2(av[3]);

        sed(FileName,S1,S2);
    }
    else
    {
        std::cerr << BOLDRED << "Usage: " << av[0] << " <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    return (0);
}

// int main ()
// {
//   std::string str ("There are two needlesin this haystack with needles.");
//   std::string str2 ("needle");
//   std::cout << sed(str,str2);
//   return (0);
// }

// std :: cerr << "Error: Failed to read from file: " << filename << std::endl;
// "Error: Operation failed."
// Error: Something went wrong.
// Error: Unable to access file:
//         std::cerr << "Error: Unable to open file for writing: " << filename << std::endl;
