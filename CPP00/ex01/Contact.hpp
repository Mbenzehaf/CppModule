/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:54:03 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/16 03:04:53 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
    //Attributes or Member Variables
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    public :
    //Methods or Member Functions
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);
    void setLastName(const std::string);
    void setFirstName(const std::string);
    void setNickname(const std::string);
    void setPhoneNumber(const std::string);
    void setDarkestSecret(const std::string);
    void Show_Contact(void);
};
#endif