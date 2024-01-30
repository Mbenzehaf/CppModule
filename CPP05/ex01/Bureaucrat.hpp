/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:40:41 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/29 16:14:12 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

#include "Form.hpp"
class Form;
class Bureaucrat{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat(void );
    Bureaucrat(const std::string &,const int&);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat& operator=(const Bureaucrat &);

    int getGrade(void) const;
    std::string getName(void) const;
    void setGrade(const int&);
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(Form &);
    class GradeTooHighException:public std::exception
    {
        public:
        //GradeTooHighException();
        const char* what() const throw();
        
    };
    class GradeTooLowException:public std::exception
    {
        public:
        //GradeTooLowException();
        const char* what() const throw();
    };
    ~Bureaucrat(void); 
};

std::ostream& operator<<(std::ostream &,const Bureaucrat &);