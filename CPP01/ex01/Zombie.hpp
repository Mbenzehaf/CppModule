/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:22 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/09 01:14:38 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
#include <iostream>
class Zombie
{
    std::string name;
    public : 
    void announce( void );
    Zombie(void);
    Zombie(std::string &);
    void setName(std::string &);
    ~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );
#endif