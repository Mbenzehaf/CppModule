/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:57:59 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/30 15:55:43 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):AForm("Shrubbery",145,137)
{
    this->_target = "default";
    //std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm(other.getName(),other.getGradeToSign(),other.getGradeToExecute())
{
    this->_target = other._target;
    //std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):AForm("Shrubbery",145,137)
{
    this->_target = target;
    //std::cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    //std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        _target = other._target; 
    }
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void)
{
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(!this->getSigned())
    {
        throw IsNotSignedException();
    }else if (this->getGradeToExecute() < executor.getGrade())
    {
        throw GradeTooLowException();
    }
    std::ofstream os(std::string(_target).append("_shrubbery"),std::ios::app);
os<<"                                                  ."<<std::endl;
os<<"                                   .         ;"<<std::endl;
os<<"      .              .              ;%     ;;"<<std::endl;
os<<"        ,           ,                :;%  %;"<<std::endl;
os<<"         :         ;                   :;%;'     .,"<<std::endl;
os<<",.        %;     %;            ;        %;'    ,;"<<std::endl;
os<<"  ;       ;%;  %%;        ,     %;    ;%;    ,%'"<<std::endl;
os<<"   %;       %;%;      ,  ;       %;  ;%;   ,%;'"<<std::endl;
os<<"    ;%;      %;        ;%;        % ;%;  ,%;'"<<std::endl;
os<<"     `%;.     ;%;     %;'         `;%%;.%;'"<<std::endl;
os<<"      `:;%.    ;%%. %@;        %; ;@%;%'"<<std::endl;
os<<"         `:%;.  :;bd%;          %;@%;'"<<std::endl;
os<<"           `@%:.  :;%.         ;@@%;'"<<std::endl;
os<<"             `@%.  `;@%.      ;@@%;"<<std::endl;
os<<"               `@%%. `@%%    ;@@%;"<<std::endl;
os<<"                 ;@%. :@%%  %@@%;"<<std::endl;
os<<"                   %@bd%%%bd%%:;"<<std::endl;
os<<"                     #@%%%%%:;;"<<std::endl;
os<<"                     %@@%%%::;"<<std::endl;
os<<"                     %@@@%(o);  . '"<<std::endl;
os<<"                     %@@@o%;:(.,'"<<std::endl;
os<<"                 `.. %@@@o%::;"<<std::endl;
os<<"                    `)@@@o%::;"<<std::endl;
os<<"                     %@@(o)::;"<<std::endl;
os<<"                    .%@@@@%::;"<<std::endl;
os<<"                    ;%@@@@%::;."<<std::endl;
os<<"                   ;%@@@@%%:;;;."<<std::endl;
os<<"               ...;%@@@@@%%:;;;;,..    "<<std::endl;
}