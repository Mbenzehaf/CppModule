/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:19:26 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/11 01:19:15 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
#include <iostream>
class Zombie
{
    private:
    std::string name;
    public:
    Zombie(const std::string &);
    ~Zombie(void);
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif