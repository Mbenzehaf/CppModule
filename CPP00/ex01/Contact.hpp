/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:54:03 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/03 21:57:32 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    public :
   // Contact(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &);
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);
    void setLastName(const std::string &);
    void setFirstName(const std::string &);
    void setNickname(const std::string &);
    void setPhoneNumber(const std::string &);
    void setDarkestSecret(const std::string &);
    void Show_Contact(void);
};
#endif