/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 04:48:19 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 05:53:38 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default constructor called" << std::endl;
}
Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain Copy constructor called" << std::endl;
}
Brain& Brain::operator=(const Brain &other)
{
    if(this != &other)
    {
        for(int i=0; i<100 ;i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain Copy assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}