/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:41:20 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/31 17:51:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::count = 0; 

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
        throw NotSignedException();
    }else if (this->getGradeToExecute() < executor.getGrade())
    {
        throw GradeTooLowException();
    }
    std::cout << "* drilling noises *";
    
    if (count % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cerr << this->_target << " robotomy failed" << std::endl;
    count++;
    /*
      int  i = rand();
        if (i % 2 == 0)
            std::cout << "ZZZZZZZNNN!" << target << " has been robotomized!" << std::endl;
        else
            std::cout << "Oops!Robotomy failed! " << target << " is still alive." << std::endl;
           if ( i % 2 == 0 )
            std::cout << "BZZZZZT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;

        std::cout << "*Clank* *Clank* *Clank*" << std::endl;
    std::time_t  currentTime = std::time(0);
   

        std::cout << executor.getName() << " " << ((++RobotomyRequestList % 2) ? "has been robotomized successfully" : " robotomy failed") << std::endl;
    std::cout << _target <<" has been robotomized successfully 50% of the time. "<<std::endl;*/
}
std::string RobotomyRequestForm::getTarget(void)
{
    return (_target);
}