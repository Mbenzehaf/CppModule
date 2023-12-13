/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:43:47 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/13 08:35:16 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac,char **av)
{
  if(ac != 2)
  {
        std::cerr << BOLDRED << "Usage: " << av[0] << " <string>" << std::endl;
        return (1);
  }
  Harl harl;
  harl.complain(av[1]);
  return(0);
}