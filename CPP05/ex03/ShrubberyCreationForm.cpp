/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:57:59 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/01 21:44:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("shrubbery creation", 145, 137)
{
    this->_target = "default";
    // std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute())
{
    this->_target = other._target;
    // std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("shrubbery creation", 145, 137)
{
    this->_target = target;
    // std::cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    // std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
    if (&other != this)
    {
        _target = other._target;
    }
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void)
{
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
    {
        throw NotSignedException();
    }
    else if (this->getGradeToExecute() < executor.getGrade())
    {
        throw GradeTooLowException();
    }

    //std::ofstream os(target , std::ofstream::app);
    std::ofstream os;
    os.open(std::string(_target).append("_shrubbery").c_str(),std::ios::app);
    if (!os.is_open())
	{
        throw std::runtime_error("Unable to open file for shrubbery creation.");
    }
    os << "                                                  ." << std::endl;
    os << "                                   .         ;" << std::endl;
    os << "      .              .              ;%     ;;" << std::endl;
    os << "        ,           ,                :;%  %;" << std::endl;
    os << "         :         ;                   :;%;'     .," << std::endl;
    os << ",.        %;     %;            ;        %;'    ,;" << std::endl;
    os << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    os << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
    os << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    os << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    os << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    os << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
    os << "           `@%:.  :;%.         ;@@%;'" << std::endl;
    os << "             `@%.  `;@%.      ;@@%;" << std::endl;
    os << "               `@%%. `@%%    ;@@%;" << std::endl;
    os << "                 ;@%. :@%%  %@@%;" << std::endl;
    os << "                   %@bd%%%bd%%:;" << std::endl;
    os << "                     #@%%%%%:;;" << std::endl;
    os << "                     %@@%%%::;" << std::endl;
    os << "                     %@@@%(o);  . '" << std::endl;
    os << "                     %@@@o%;:(.,'" << std::endl;
    os << "                 `.. %@@@o%::;" << std::endl;
    os << "                    `)@@@o%::;" << std::endl;
    os << "                     %@@(o)::;" << std::endl;
    os << "                    .%@@@@%::;" << std::endl;
    os << "                    ;%@@@@%::;." << std::endl;
    os << "                   ;%@@@@%%:;;;." << std::endl;
    os << "               ...;%@@@@@%%:;;;;,..    " << std::endl;
    os.close();
}