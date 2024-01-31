/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:41:15 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/31 17:31:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):AForm("Presidential Pardon",25,5)
{
    this->_target = "default";
    //std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):AForm(other.getName(),other.getGradeToSign(),other.getGradeToExecute())
{
    this->_target = other._target;
    //std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):AForm("Presidential Pardon",25,5)
{
    this->_target = target;
    //std::cout << "PresidentialPardonForm parameterized constructor called" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    //std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        _target = other._target; 
    }
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
 {
      if(!this->getSigned())
    {
        throw NotSignedException();
    }else if (this->getGradeToExecute() < executor.getGrade())
    {
        throw GradeTooLowException();
    }
    std::cout << _target <<" has been pardoned by Zaphod Beeblebrox."<<std::endl;

 }
std::string PresidentialPardonForm::getTarget(void)
{
    return (_target);
}