/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:41:26 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/23 08:47:05 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
void fun()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *me = new Character("me");
    
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->unequip(0);
    me->unequip(0);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter *bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
}
int main()
{
  fun();
  //system("leaks Materia");
    return 0;
}