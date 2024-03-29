/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:01:22 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/02 19:05:31 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm{
    private:
    const std::string _name;
    bool _signed;
    const int _gradetosign;
    const int _gradetoexecute;
    public:
    AForm(void);
    AForm(const std::string &,const int & ,const int &);
    AForm(const AForm&);
    virtual ~AForm();
    
    AForm& operator=(const AForm&);


    class GradeTooHighException:public std::exception {
        public :
        const char* what() const throw();
        };
    class GradeTooLowException:public std::exception {
        public:
            const char* what() const throw();
        };
    class NotSignedException:public std::exception {
        public:
            const char* what() const throw();
        };
    const std::string getName(void) const ;
    bool getSigned(void) const ;
    int getGradeToSign(void) const;
    int getGradeToExecute(void) const ;
    void beSigned(const Bureaucrat&);

    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &,const AForm &);