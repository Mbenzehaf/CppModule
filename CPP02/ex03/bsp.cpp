/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:20:25 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/14 03:15:32 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

const Fixed abs(const Fixed &o)
{ 
    if(o < 0)
        return (o * (-1));
    return (o);
}          
//Area of Triangle = 1/2(x1*(y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))
Fixed area(const Point &a, const Point &b,const Point &c)
{
    const Fixed & x1 = a.getx();
    const Fixed & y1 = a.gety();

    const Fixed & x2 = b.getx();
    const Fixed & y2 = b.gety();

    const Fixed & x3 = c.getx();
    const Fixed & y3 = c.gety();
    
    return ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))/2);
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed ABC = abs(area(a,b,c));
    if(ABC == 0)
        {
            std::cerr << "is not a triangle" << std::endl;
            return (0);
        }
    Fixed PAB = abs(area(a,b,point));
    Fixed PBC = abs(area(b,c,point));
    Fixed PAC = abs(area(a,c,point));
    return ( ABC == (PAB + PBC + PAC));
}