/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:06:38 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 09:43:43 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Ice : public AMateria
{

public:
    Ice(void);
    Ice(const Ice&);
    Ice& operator=(const Ice&);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice();
};
