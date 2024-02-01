/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:31:41 by codespace         #+#    #+#             */
/*   Updated: 2024/02/01 18:38:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern{
public:
    Intern(void);
    Intern(const Intern &);
    Intern& operator=(const Intern &);
    ~Intern(); 

    AForm* makeForm(const std::string &,const std::string &);
};