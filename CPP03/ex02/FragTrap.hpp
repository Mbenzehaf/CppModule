/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:34:04 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/16 05:00:57 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__
#include "ScavTrap.hpp"

class FragTrap :public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &);
    FragTrap& operator=(const FragTrap &);
    ~FragTrap();

    void highFivesGuys(void);
};
#endif
