/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 06:00:30 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/20 07:01:38 by mben-zeh         ###   ########.fr       */
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
};
#endif