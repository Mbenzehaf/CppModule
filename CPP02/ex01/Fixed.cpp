/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 05:20:32 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/23 17:01:08 by mben-zeh         ###   ########.fr       */
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
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->_fixedPoint = obj._fixedPoint;
    return (*this);
}
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return (this->_fixedPoint / (float)( 1 << _fractionalBits));
}

int Fixed::toInt( void ) const
{
    return ((int)(this->_fixedPoint >> _fractionalBits));
}

std::ostream& operator<<(std::ostream &os,const Fixed &ob)
{
    os << ob.toFloat();
    return (os);
}