/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:07:54 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/02 10:39:43 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <cstring>
#include <cmath>
#include <list>
#include <vector>
class Point{
    float x;
    float y;
    public :
    void saisir();
    void deplacer(float,float);
    void afficher();
};


#endif