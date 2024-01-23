/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 06:00:30 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/12 21:45:57 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>
#include <cmath>
class Fixed{
private:
    int _fixedPoint;
    static const int _fractionalBits = 8;
public:
    Fixed(void);
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed &);
    Fixed& operator=(const Fixed &);
    ~Fixed(void);
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream &os,const Fixed &ob);
#endif