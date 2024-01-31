/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:41:23 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/31 17:31:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
    std::string _target;
    static int count; 
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm(const std::string &);
    ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(const RobotomyRequestForm &);
    
    void execute(Bureaucrat const & executor) const;
    std::string getTarget(void);
};