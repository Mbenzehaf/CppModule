/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 05:20:32 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/13 21:34:32 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = (int)roundf(value *(1 << _fractionalBits));
}
Fixed::Fixed(const Fixed &Copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Copy;
}
Fixed& Fixed::operator=(const Fixed& Copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(&Copy != this)
        this->_fixedPoint = Copy._fixedPoint;
    return (*this);
}
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return (this->_fixedPoint / (float)( 1 << 8));
}

int Fixed::toInt( void ) const
{
    return ((int)(this->_fixedPoint >> 8));
}

std::ostream& operator<<(std::ostream &os,const Fixed &ob)
{
    os << ob.toFloat();
    return (os);
}
