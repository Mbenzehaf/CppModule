/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:41:18 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/04 02:13:54 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
    std::string _target;
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm(const std::string &);
    ~PresidentialPardonForm();

    PresidentialPardonForm& operator=(const PresidentialPardonForm &);
    
    void execute(Bureaucrat const & executor) const;
    std::string getTarget(void);
};