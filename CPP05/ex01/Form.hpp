/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:33:24 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/29 16:21:55 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
    private:
    const std::string _name;
    bool _signed;
    const int _gradetosign;
    const int _gradetoexecute;
    public:
    Form(void);
    Form(const std::string &,const int & ,const int &);
    Form(const Form&);
     ~Form();
    
    Form& operator=(const Form&);


    class GradeTooHighException:public std::exception {
        public :
        const char* what() const throw();
        };
    class GradeTooLowException:public std::exception {
        public:
            const char* what() const throw();
        };

    const std::string getName(void) const ;
    bool getSigned(void) const ;
    int getGradeToSign(void) const;
    int getGradeToExecute(void) const ;
    void beSigned(const Bureaucrat&);

    
   
};

std::ostream& operator<<(std::ostream &,const Form &);