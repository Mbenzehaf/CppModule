/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:40:11 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/02 16:22:12 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib> 
int main(void) 
{
	try
	{
		Bureaucrat bureaucrat("med",10);
	
		ShrubberyCreationForm shrubberyForm("Shrubbery");
        RobotomyRequestForm robotomyForm("Robotomy");
        PresidentialPardonForm pardonForm("President");
	
        shrubberyForm.beSigned(bureaucrat);
        robotomyForm.beSigned(bureaucrat);
        pardonForm.beSigned(bureaucrat);

        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
    return (0);
}