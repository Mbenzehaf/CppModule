/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:47:29 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/23 06:04:04 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
class AMateria;
class MateriaSource : public IMateriaSource
{
private:
    AMateria *bag[4];
public:
    MateriaSource(void);
    MateriaSource(const MateriaSource&);
    MateriaSource& operator=(const MateriaSource&);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};
