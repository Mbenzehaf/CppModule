/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:38:21 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/04 20:37:11 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>
#include <string>
#include <sstream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#define BOLDBLACKB   "\033[1;40m"           /* Bold Black BackGround*/
#define BOLDREDB     "\033[1;41m"      /* Bold Red BackGround*/
#define BOLDGREENB   "\033[1;42m"      /* Bold Green BackGround*/
#define BOLDYELLOWB  "\033[1;43m"      /* Bold Yellow BackGround*/
#define BOLDBLUEB    "\033[1;44m"      /* Bold Blue BackGround*/
#define BOLDMAGENTAB "\033[1;45m"      /* Bold Magenta BackGround*/
#define BOLDCYANB    "\033[1;46m"      /* Bold Cyan BackGround*/
#define BOLDWHITEB   "\033[1;47m"     /* Bold White BackGround*/

class PhoneBook
{
    Contact contact[8];
    int nbrContact;
    public:
    PhoneBook(void);
    void Add_Contact(void);
    void Search_Contact(void);
};
#endif
//WRONG INDEX
//ENTER ONE COMMAND [ADD] or [SEARCH] or [EXIT]:
//{WRONG ENTRIES}
//NO CONTACT TO SHOW [CONTACT FIELDS]Index|First Name| Last Name|  NickName