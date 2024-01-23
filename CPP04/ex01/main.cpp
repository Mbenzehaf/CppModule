/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:08:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 07:01:25 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    size_t N = 10;
    Animal* A[N];
    
    for (size_t i = 0; i < N; i++)
    {
        if(i < N /2)
            A[i] = new Dog();
        else
            A[i] = new Cat();
    }
    for (size_t i = 0; i < N; i++)
    {
       delete A[i];
    }
return (0);
}