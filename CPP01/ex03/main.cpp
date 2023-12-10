/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:39:11 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/10 01:43:49 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "HumanA.hpp"
//#include "HumanB.hpp"
#include "Weapon.hpp"
int	main(void)
{
    {
        std :: cout << "benz"<<std::endl;
    }
	{
		Weapon club = Weapon("crude spiked club");
		//HumanA bob("Bob", club);
		//bob.attack();
		//club.setType("some other type of club");
		//bob.attack();
	}
	{
		// Weapon club = Weapon("crude spiked club");
		// HumanB jim("Jim");
		// jim.setWeapon(club);
		// jim.attack();
		// club.setType("some other type of club");
		// jim.attack();
	}
	return (0);
}