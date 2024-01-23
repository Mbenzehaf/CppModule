/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:20:06 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/25 17:43:55 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__
#include <iostream>
#include "Fixed.hpp"
class Point{
private:
    const Fixed x;
    const Fixed y;
public:
    Point(void);
    Point(const float ,const float);
    Point(const Point &);
    Point& operator=(const Point &);
    const Fixed getx(void) const;
    const Fixed gety (void) const;
    ~Point(void);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif