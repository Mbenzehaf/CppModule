/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:34:13 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/10 12:55:42 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <cmath>
class Base{
  public : 
  virtual ~Base();
};

class A:public Base{
    
};
class B:public Base{
    
};
class C:public Base{
    
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);