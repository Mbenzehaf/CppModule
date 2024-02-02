/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:58:02 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/02 17:08:48 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm: public AForm
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm(const std::string &);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
    
    void execute(Bureaucrat const & executor) const;
    std::string getTarget(void);
};
