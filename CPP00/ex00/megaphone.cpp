/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:26:45 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/11/29 13:05:16 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int ac,char **av)
{
    if(ac>1)
    {
        for(int i = 1;av[i];i++)
            for(int j = 0;av[i][j];j++)
                std :: cout << (char)toupper((int)av[i][j]);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout<<std::endl;
}