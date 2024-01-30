/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:33:14 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/29 16:21:07 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):_name("default form"), _signed(false),_gradetosign(150),_gradetoexecute(150)
{
    // std::cout << "Form Default constructor called" << std::endl;
}
Form::Form(const std::string &name,const int &gradetosign, const int &gradetoexecute):_name(name),_signed(false),_gradetosign(gradetosign),_gradetoexecute(gradetoexecute)
{
    if(gradetosign < 1 || gradetoexecute < 1)
    {
        throw Form::GradeTooHighException();
    }else if(gradetosign > 150 || gradetoexecute >150)
    {
        throw Form::GradeTooLowException();
    }
    //std::cout << "Form parameterized constructor called" << std::endl;
}
Form::Form(const Form &other):_name(other._name),_signed(other._signed),_gradetosign(other._gradetosign),_gradetoexecute(other._gradetoexecute)
{
    //std::cout << "Form Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    if(&other != this)
    {
        this->_signed = other._signed;
    }
    return (*this);
    //std::cout << "Form Copy assignment operator called" << std::endl;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too High");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

void Form::beSigned(const Bureaucrat &obj)
{
    if(obj.getGrade() > _gradetosign)
    {
        throw Form::GradeTooLowException();
    }
    _signed = true;
}

const std::string Form::getName(void) const
{
    return (_name);
}
bool Form::getSigned(void) const 
{
    return (_signed);
}
int Form::getGradeToSign(void) const
{
    return (_gradetosign);
}
int Form::getGradeToExecute(void) const
{
    return (_gradetoexecute);
}
Form::~Form()
{
    //std::cout << "Form destructor called" << std::endl;
}
std::ostream &operator<<(std::ostream &os, const Form &ob)
{
    os << "name : " << ob.getName()<<std::endl;
    os << "Signed : " << ob.getSigned()<<std::endl;
    os << "Grade to sign : " << ob.getGradeToSign()<<std::endl;
    os << "Grade to execute :" << ob.getGradeToExecute()<<std::endl;
    return (os);
}