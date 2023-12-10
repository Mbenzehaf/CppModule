/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:04:27 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/05 23:10:19 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->nbrContact = 0;
}

void	PrintContact(std ::string str, int n = 0)
{
	size_t size;

	size = 10;
	std::cout << std::setw(size)<<std::right;
	if (str.length() > size)
		std::cout << str.substr(0, size - 1).append(".");
	else
		std::cout << str;
	if(!n)
		std ::cout << "|";
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
	std ::cout << std::setw(22)<<std::right <<BOLDBLUE<< "[CONTACT FIELDS]" << RESET<<std::endl;
	while (ShowMsg(i) < 5)
	{
		if (!std::getline(std::cin, str).eof())
		{
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
	n++;
	if (n == 8)
		n = 0;
}
void PhoneBook::Search_Contact(void)
{
	int index;
	std ::string str;

	if (this->nbrContact == 0)
	{
		std::cerr<< RED << "[NO CONTACT FOUND]" << std::endl;
		return ;
	}
	std::cout<<std::setw(20)<<std::right << BOLDBLUEB << "[ C O N T A C T ]" <<RESET<< std::endl;
	std::cout << BOLDBLUEB << "     Index|First Name| Last Name|  NickName" << RESET << std::endl;
	for (int i = 0; i < this->nbrContact; i++)
	{
		Contact &c = contact[i];
		std ::cout << BOLDCYANB << std::setw(10) << i + 1 << "|";
		PrintContact(c.getFirstName());
		PrintContact(c.getLastName());
		PrintContact(c.getNickname(), 1);
		std ::cout << RESET << std ::endl;
	}
	std ::cout<< BOLDGREEN<< "ENTER INDEX : "<<BOLDWHITE;
	if(std ::getline(std::cin, str).eof())
		exit(1);
	if (Check(str, isdigit))
	{
		index = std::atoi(str.c_str());
		if(index > 0 && index <= this->nbrContact)
		{
			this->contact[index - 1].Show_Contact();
			return ;
		}
	}
	std::cerr<< RED << "[INVALID INDEX]" << std::endl;
}