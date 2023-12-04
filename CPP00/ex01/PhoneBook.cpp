/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:04:27 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/04 21:19:34 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->nbrContact = 0;
}

void	PrintContact(std ::string str, size_t size)
{
	std::cout << std::setw(size);
	if (str.length() > size)
		std::cout << str.substr(0, size - 1).append(".");
	else
		std::cout << str;
	std ::cout << "|"<<RESET;
}
bool	Check(std::string &str, int (*func)(int))
{
	int	i;

	i = 0;
	for (i = 0; str[i]; i++)
	{
		if (!func(str[i]))
			return (false);
	}
	return (i && !str[i]);
}
int	ShowMsg(int &i)
{
	switch (i)
	{
	case 0:
	{
		std ::cout << "FIRST NAME : ";
		break ;
	}
	case 1:
	{
		std ::cout << "LAST NAME : ";
		break ;
	}
	case 2:
	{
		std ::cout << "NICKNAME : ";
		break ;
	}
	case 3:
	{
		std ::cout << "PHONE NUMBER : ";
		break ;
	}
	case 4:
	{
		std ::cout << "DARKEST SECRET : ";
		break ;
	}
	}
	return (i);
}
void PhoneBook::Add_Contact(void)
{
	static int	n;
	int			i;

	std ::string str;
	i = 0;
	//std ::cout << "nbrcount" << this->nbrContact;
	while (ShowMsg(i) < 5)
	{
		if (!std::getline(std::cin, str).eof())
		{
			//std ::cout << str << ":" << i << std::endl;
			if (i != 3 && Check(str, &isprint) && !Check(str, isspace))
			{
				switch (i)
				{
				case 0:
					this->contact[n].setFirstName(str);
					break ;
				case 1:
					this->contact[n].setLastName(str);
					break ;
				case 2:
					this->contact[n].setNickname(str);
					break ;
				case 4:
					this->contact[n].setDarkestSecret(str);
					break ;
				}
				i++;
			}
			else if (i == 3 && Check(str, isdigit))
			{
				this->contact[n].setPhoneNumber(str);
				i++;
			}
		}
		else
			exit(1);
	};
	if (this->nbrContact < 8)
		this->nbrContact++;
	if (n == 8)
		n = 0;
	else
		n++;
}
void PhoneBook::Search_Contact(void)
{
	int index;
	std ::string str;

	if (this->nbrContact == 0)
	{
		std::cerr<< RED << "[NO CONTACT TO SHOW]" << std::endl;
		return ;
	}
	std::cout <<BOLDBLUEB<< "\t\t[CONTACT FIELDS]" <<RESET<< std::endl;
	std::cout << BOLDBLUEB << "   Index  |First Name| Last Name|  NickName" << RESET << std::endl;
	for (int i = 0; i < this->nbrContact; i++)
	{
		Contact &c = contact[i];

		std ::cout <<BOLDCYANB<< std::setw(10) << i + 1 << "|";
		PrintContact(c.getFirstName(), 10);
		PrintContact(c.getLastName(), 10);
		PrintContact(c.getNickname(), 10);
		std ::cout << std ::endl;
	}
	std ::cout<< BOLDGREEN<< "Enter the index of the contact : "<<BOLDWHITE;
	if(std ::getline(std::cin, str).eof())
		exit(1);
	if (Check(str, isdigit))
	{
		index = std::atoi(str.c_str());
		if(index > 0 && index <= this->nbrContact)
		{
			this->contact[index].Show_Contact();
		}
	}
	std::cerr<< RED << "[WRONG ENTRIES]" << std::endl;
}