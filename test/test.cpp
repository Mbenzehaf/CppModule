/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:07:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/11/29 17:03:59 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

void Point::saisir()
{
    std :: cout << "Entrer l'abscisse x : ";
    std :: cin >> x;
    std :: cout << "Entrer l'ordonnée  y : ";
    std :: cin >> y;

}
void Point::deplacer(float x,float y)
{
    this->x = x;
    this->y = y;
}
void Point::afficher()
{
    std :: cout << "P("<<x<<","<<y<<")"<<std :: endl;
}
int main(void)
{
    Point Point;
    Point.saisir();
    Point.deplacer(1,0);
    Point.afficher();
    
    return (0);
}