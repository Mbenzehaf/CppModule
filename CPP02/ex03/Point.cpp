/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:19:29 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/25 19:36:26 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):x(0),y(0)
{

}
Point::Point(const float _x,const float _y):x(_x),y(_y)
{
    
}
Point::Point(const Point & o):x(o.x),y(o.y)
{
    
}
Point& Point::operator=(const Point &o)
{
    (Fixed)this->x = o.x;
    (Fixed)this->y = o.y;
    return (*this);
}
Point::~Point(void)
{
    
}

const Fixed Point::getx(void) const
{
    return (this->x);
}
const Fixed Point::gety (void) const
{
    return (this->y);
}