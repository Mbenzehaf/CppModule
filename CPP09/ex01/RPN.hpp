/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:44:05 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 09:44:08 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_HPP__
#define __RPN_HPP__
#include <iostream>
#include <algorithm>
#include <stack>
class RPN
{
private:
    std::stack<double> Postfix;

public:
    RPN(void);
    RPN(const RPN &);
    RPN &operator=(const RPN &);
    void run(const std::string &);
    ~RPN();
};
#endif