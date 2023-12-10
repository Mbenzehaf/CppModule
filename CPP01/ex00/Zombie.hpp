/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:19:26 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/08 00:37:15 by mben-zeh         ###   ########.fr       */
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
    Zombie(std::string &);
    ~Zombie(void);
};

 Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif