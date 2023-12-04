/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:18:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/04 21:15:01 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
int main(void)
{
    std :: string str;
    PhoneBook phonebook;

    while (1)
    {
        std::cout<<BOLDGREEN <<"ENTER COMMAND [ADD] or [SEARCH] or [EXIT]:"<<BOLDWHITE;
        if(std::getline(std::cin,str).eof() || str == "EXIT")
            return (str=="");
        else if(str == "ADD")
        {
            phonebook.Add_Contact();
        }else if(str == "SEARCH")
        {
             phonebook.Search_Contact();
        }else
            std::cerr << BOLDRED << "[Invalid argument]" << std::endl;
    }
    return (0);
}