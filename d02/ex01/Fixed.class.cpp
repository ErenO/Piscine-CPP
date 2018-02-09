/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:14:48 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 18:53:16 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"
#include <cmath>

float Fixed::toFloat( void ) const {
    return getRawBits() * (1 << getEight());
}

int Fixed::getEight(void) {
    return Fixed::_eight;
}

int Fixed::toInt( void ) const {
    return getRawBits() >> getEight();
}


int Fixed::getRawBits(void) const {
    return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {
    this->_rawBits = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_rawBits = rhs.getRawBits();
    }
    return *this;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(void) {
    std::cout << "Default constructor is called" << std::endl;
    this->_n = 0;
    this->_rawBits = 0;
    return ;
}

Fixed::Fixed(int const bits) {
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = bits << getEight();
    return ;
}

Fixed::Fixed(float const bits) {
    std::cout << "Float constructor called" << std::endl;
    this->_rawBits = roundf(bits * (1 << getEight()));
    return ;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor is called" << this->_rawBits << std::endl;
    *this = src;
    return ;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
    o << ((float)i.getRawBits() / (1 << Fixed::getEight()));
    return o;
}
