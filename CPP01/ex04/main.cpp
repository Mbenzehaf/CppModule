/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 05:34:03 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 07:16:01 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>
void Replace(std::fstream &file_in, std::fstream &file_out)
{
    std ::string line;
   
    if (!file_out)
    {
        file_in.close();
        return;
    }
    
    while (std::getline(file_in,line))
    {
        file_out << line;
        std :: cout << "oky" ;
    }
     
}
int main(int ac, char **av)
{
    if (ac == 4)
    {
        std ::fstream file_in;
        std ::fstream file_out;
        std::string file = std::string(av[1]);
        file_in.open(file, std::ios::in);
        if (file_in)
        {
            file_out.open(file.append(".replace"), std::ios::out|std::ios::app);
            Replace(file_in,file_out);
        }
        if (!file_in || !file_out)
        {
            std ::cerr << BOLDRED << file << " Error: Unable to access file;" << std ::endl;
            exit(1);
        }
    }
    else
    {
        std::cerr << BOLDRED << "Usage: " << av[0] << " <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    return (0);
}
// std :: cerr << "Error: Failed to read from file: " << filename << std::endl;
// "Error: Operation failed."
// Error: Something went wrong.
// Error: Unable to access file:
//         std::cerr << "Error: Unable to open file for writing: " << filename << std::endl;
