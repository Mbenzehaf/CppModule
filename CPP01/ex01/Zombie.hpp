/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:39:22 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/06 02:59:51 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
   private :
    std::string name;
    public :
    Zombie(void);
    Zombie(const std::string &);
    ~Zombie(void);
    void setname(const std::string &);
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
#endif