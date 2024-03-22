/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:44:16 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 10:08:16 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isoperator(int c)
{
    return (c == '*' || c == '/' || c == '-' || c == '+');   
}

RPN::RPN()
{
    
}
RPN::RPN(const RPN &other)
{
    *this = other;
}
RPN& RPN::operator=(const RPN &other)
{
    if(this != &other)
    {
        this->Postfix = other.Postfix;
    }
    return (*this);
}
bool check_expression(const std::string &  expression)
{
    int c;
    if(expression.empty())
        return false;
    for(size_t i = 0 ; i < expression.length() ; i++)
    {
        c = expression[i];
        if(!isdigit(c) && !isspace(c) && !isoperator(c))
           return false;
    }
    return true;
}

void RPN::run(const std::string & expression)
{
    if(!check_expression(expression))
    {
        throw std::runtime_error("");
    }
    for(size_t i = 0 ; i < expression.length();i++)
    {
        if(isdigit(expression[i]))
        {
            Postfix.push(int(expression[i] - '0'));
        }else if(isoperator(expression[i]))
        {
            if(Postfix.size() < 2)
                throw std::runtime_error("");
            double value1 = Postfix.top();Postfix.pop(); 
            double value2 = Postfix.top();Postfix.pop();
            switch (expression[i])
             {
             case '+':Postfix.push(value2 + value1); break;
             case '-':Postfix.push(value2 - value1); break;
             case '*':Postfix.push(value2 * value1); break;
             case '/':
             {
                if(value1 == 0)
                    throw std::runtime_error(": Divide By Zero.");
                Postfix.push(value2 / value1);
                break;
             }
             }
        }
    }
    if(Postfix.size() != 1)
    {
        throw std::runtime_error("");
    }
    std::cout << Postfix.top() << std::endl;
}
RPN::~RPN()
{
    
}