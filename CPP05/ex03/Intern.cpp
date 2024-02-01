/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:31:36 by codespace         #+#    #+#             */
/*   Updated: 2024/02/01 23:10:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern Default constructor called" << std::endl;
}
Intern::Intern(const Intern &other)
{
    (void)other;
    std::cout << "Intern Copy constructor called" << std::endl;
}
Intern& Intern::operator=(const Intern &other)
{
    (void)other;
    std::cout << "Intern Copy assignment operator called" << std::endl;
    return (*this);
}
Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

AForm* Intern::makeForm(const std::string & name,const std::string & target)
{
    std::string Names[] = {"shrubbery creation" , "robotomy request" , "presidential pardon"};
    for(int i = 0; i < 3 ; i++)
    {
        if(Names[i] == name)
        {
            std::cout << "Intern creates "<< name << std::endl;
            switch (i)
            {
            case (0):
               {
                return (new ShrubberyCreationForm(target));
                break;
               }
            case (1):
               {
                return (new RobotomyRequestForm(target));
                break;
               }
            case (2):
               {
                return (new PresidentialPardonForm(target));
                break;
               }
            }
        }
    }
    std::cerr << "No such name " << name << std::endl;
    return (NULL);
}