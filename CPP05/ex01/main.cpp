/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:40:11 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/29 16:56:09 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void) 
{

	 try
	{
		Bureaucrat bureaucrat("med", 150);
		std::cout << bureaucrat << std::endl;
		std::cout << "----------------------------" << std::endl;
		Form form("form",140,150);
		std::cout << form << std::endl;
		std::cout << "----------------------------" << std::endl;
		bureaucrat.signForm(form);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
    return (0);
}