/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 06:00:30 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/20 06:20:45 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>

class Fixed{
private:
    int _fixedPoint;
    static const int _fractionalBits = 8;
public:
    Fixed(void);
    Fixed(const Fixed &);
    Fixed& operator=(const Fixed &);
    ~Fixed(void);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
#endif