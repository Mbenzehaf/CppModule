/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 05:01:56 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/18 22:26:20 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__
#include "ClapTrap.hpp"

//derived class or sub class or child

class ScavTrap:public ClapTrap {
    public:
    ScavTrap(void);
    ScavTrap(const ScavTrap& );
    ScavTrap(const std::string &);
    ScavTrap &operator=(const ScavTrap&);
    void attack(const std::string& target);
    ~ScavTrap(void);

    void guardGate();
};
#endif