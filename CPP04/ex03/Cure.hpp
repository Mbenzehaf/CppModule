/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:06:58 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/23 05:56:28 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "Character.hpp"
class Cure : public AMateria
{
public:
    Cure(void);
    Cure(const Cure&);
    Cure& operator=(const Cure&);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Cure();
};
