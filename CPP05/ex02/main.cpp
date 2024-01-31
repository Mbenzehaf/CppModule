/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:40:11 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/31 20:14:23 by codespace        ###   ########.fr       */
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
	//	 std::srand(std::time(0));
   // bool success = (std::rand() % 2 == 0);
		/*std::cout << "rand :" << std::rand()<< std::endl;
		std::cout << "rand :" << std::rand()<< std::endl;
		std::cout << "rand :" << std::rand()<< std::endl;
		std::cout << "rand :" << std::rand()<< std::endl;
		std::cout << "rand :" << std::rand()<< std::endl;
		std::cout << "rand :" << std::rand()<< std::endl;*/
		//static int  i;
		srand(std::time(0)); 
		//time_t ti();
		//time_t currentTime = std::time(0);
		
		//std::cout << "i:" << i << std::endl;
		//std::cout << "currentTime:" << currentTime << std::endl;
		std::cout << "rand : " << std::rand() << std::endl;
		//Bureaucrat bureaucrat("med", 137);
		//ShrubberyCreationForm shrubbery;
		//bureaucrat.signForm(shrubbery);
		//bureaucrat.executeForm(shrubbery);
		// std::cout << bureaucrat << std::endl;
		//std::cout << "----------------------------" << std::endl;
		// //AForm form("form",140,150);
		// //std::cout << form << std::endl;
		// std::cout << "----------------------------" << std::endl;
		// bureaucrat.signForm(form);
		/*Bureaucrat bureaucrat("med", 50);
        ShrubberyCreationForm shrubberyForm("Shrubbery");
        RobotomyRequestForm robotomyForm("Robotomy");
        PresidentialPardonForm pardonForm("President");
	
        shrubberyForm.beSigned(bureaucrat);
        robotomyForm.beSigned(bureaucrat);
        pardonForm.beSigned(bureaucrat);

        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);*/
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
    return (0);
}