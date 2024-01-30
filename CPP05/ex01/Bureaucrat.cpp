/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:40:30 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/29 16:26:27 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

 Bureaucrat::Bureaucrat(void):_name("default"),_grade(150)
 {
    //std::cout << "Bureaucrat Default constructor called" << std::endl;
 }
Bureaucrat::Bureaucrat(const std::string &name,const int& grade):_name(name)
{
    setGrade(grade);
    //std::cout << "Bureaucrat parameterized constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other):_name(other._name)
{
    setGrade(other._grade);
    //std::cout << "Bureaucrat Copy constructor called" << std::endl;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if(&other != this)
    {
        setGrade(other._grade);
    }
    //std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
    return (*this);
}

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}
std::string Bureaucrat::getName(void) const
{
    return (_name);
}
void Bureaucrat::setGrade(const int& grade)
{
    if(grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }else if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    this->_grade = grade;
}
// Bureaucrat::GradeTooHighException::GradeTooHighException()
// {
    
// }
// Bureaucrat::GradeTooLowException::GradeTooLowException()
// {
    
// }
 void Bureaucrat::incrementGrade(void)
{
    setGrade(_grade - 1);
}
void Bureaucrat::decrementGrade(void)
{
    setGrade(_grade + 1);
}
 void Bureaucrat::signForm(Form &obj)
 {
   try
    {
        obj.beSigned(*this);
        std::cout << _name << " signed " << obj.getName()<<std::endl;
   }catch(const std::exception& e)
    {  
        std::cout << _name << " couldn’t sign " << obj.getName() << " because " << e.what()<<std::endl;
    }
 }
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream &os,const Bureaucrat &ob)
{
    os <<ob.getName()<<", bureaucrat grade "<<ob.getGrade()<<".";
    return (os);
}
Bureaucrat::~Bureaucrat(void)
{
    //std::cout << "Bureaucrat destructor called" << std::endl;
}