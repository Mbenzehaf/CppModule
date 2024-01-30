/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:01:38 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/30 15:15:55 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void):_name("default AForm"), _signed(false),_gradetosign(150),_gradetoexecute(150)
{
    // std::cout << "AForm Default constructor called" << std::endl;
}
AForm::AForm(const std::string &name,const int &gradetosign, const int &gradetoexecute):_name(name),_signed(false),_gradetosign(gradetosign),_gradetoexecute(gradetoexecute)
{
    if(gradetosign < 1 || gradetoexecute < 1)
    {
        throw AForm::GradeTooHighException();
    }else if(gradetosign > 150 || gradetoexecute >150)
    {
        throw AForm::GradeTooLowException();
    }
    //std::cout << "AForm parameterized constructor called" << std::endl;
}
AForm::AForm(const AForm &other):_name(other._name),_signed(other._signed),_gradetosign(other._gradetosign),_gradetoexecute(other._gradetoexecute)
{
    //std::cout << "AForm Copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    if(&other != this)
    {
        this->_signed = other._signed;
    }
    return (*this);
    //std::cout << "AForm Copy assignment operator called" << std::endl;
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too High");
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}
const char *AForm::IsNotSignedException::what() const throw()
{
    return ("Form is not signed");
}
void AForm::beSigned(const Bureaucrat &obj)
{
    if(obj.getGrade() > _gradetosign)
    {
        throw AForm::GradeTooLowException();
    }
    _signed = true;
}

const std::string AForm::getName(void) const
{
    return (_name);
}
bool AForm::getSigned(void) const 
{
    return (_signed);
}
int AForm::getGradeToSign(void) const
{
    return (_gradetosign);
}
int AForm::getGradeToExecute(void) const
{
    return (_gradetoexecute);
}
AForm::~AForm()
{
    //std::cout << "AForm destructor called" << std::endl;
}
std::ostream &operator<<(std::ostream &os, const AForm &ob)
{
    os << "name : " << ob.getName()<<std::endl;
    os << "Signed : " << ob.getSigned()<<std::endl;
    os << "Grade to sign : " << ob.getGradeToSign()<<std::endl;
    os << "Grade to execute :" << ob.getGradeToExecute()<<std::endl;
    return (os);
}