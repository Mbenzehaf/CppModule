/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:41:20 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/30 15:49:05 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):AForm("Robotomy Request",72,45)
{
    this->_target = "default";
    //std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm(other.getName(),other.getGradeToSign(),other.getGradeToExecute())
{
    this->_target = other._target;
    //std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):AForm("Robotomy Request",72,45)
{
    this->_target = target;
    //std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    //std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
    if(&other != this)
    {
        _target = other._target; 
    }
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
      if(!this->getSigned())
    {
        throw IsNotSignedException();
    }else if (this->getGradeToExecute() < executor.getGrade())
    {
        throw GradeTooLowException();
    }
    std::cout << _target <<" has been robotomized successfully 50% of the time. "<<std::endl;
}
std::string RobotomyRequestForm::getTarget(void)
{
    return (_target);
}