/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:38:37 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/09 02:36:58 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
int main(void)
{
    
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;


    std::cout << std::setw(40) << std::left<< "Memory address of the string variable "<<": " <<  &variable << std::endl;
    std::cout << std::setw(40) << std::left<< "Memory address held by stringPTR "<<": " << stringPTR << std::endl;
    std::cout << std::setw(40) << std::left<<"Memory address held by stringREF "<<": "<< &stringREF << std::endl;

    std::cout << std::setw(40) << std::left<<"Value of the string variable " << ": "<< variable << std::endl;
    std::cout << std::setw(40) << std::left<<"Value pointed to by stringPTR "<<": "<< *stringPTR << std::endl;
    std::cout << std::setw(40) << std::left<<"Value pointed to by stringREF " <<": "<< stringREF << std::endl;
    return (0);
}