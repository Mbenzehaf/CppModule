/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:53:34 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/03 21:57:42 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Contact::Contact(const std::string &first_name, const std::string &last_name, const std::string &nickname, const std::string &phone_number, const std::string &darkest_secret)
// {
//     this->first_name = first_name;
//     this->last_name = last_name;
//     this->nickname = nickname;
//     this->phone_number = phone_number;
//     this->darkest_secret = darkest_secret;
// }
std::string Contact::getFirstName()
{
    return (this->first_name);
}

std::string Contact::getLastName()
{
    return (this->last_name);
}
std::string Contact::getNickname()
{
    return (this->nickname);
}
std::string Contact::getPhoneNumber()
{
    return (this->phone_number);
}
std::string Contact::getDarkestSecret()
{
    return (this->darkest_secret);
}
void Contact::setLastName(const std::string &last_name)
{
    this->last_name = last_name;
}
void Contact::setFirstName(const std::string &first_name)
{
    this->first_name = first_name;
}
void Contact::setNickname(const std::string &nickname)
{
    this->nickname = nickname;
}
void Contact::setPhoneNumber(const std::string &phone_number)
{
    this->phone_number = phone_number;
}
void Contact::setDarkestSecret(const std::string &darkest_secret)
{
    this->darkest_secret = darkest_secret;
}
void Contact::Show_Contact(void)
{
	std ::cout << "FIRST NAME : "<<this->first_name<<std::endl;
	std ::cout << "LAST NAME : "<<this->last_name<<std::endl;
	std ::cout << "NICKNAME : "<<this->nickname<<std::endl;
	std ::cout << "PHONE NUMBER : "<<this->phone_number<<std::endl;
    std ::cout << "DARKEST SECRET : "<<this->darkest_secret<<std::endl;
}
