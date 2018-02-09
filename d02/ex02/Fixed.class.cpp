/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:14:48 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 17:44:52 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"
#include <cmath>

float Fixed::toFloat( void ) const {
    return (float)getRawBits() / (1 << getEight());
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

Fixed  Fixed::operator+(Fixed const & rhs) {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed  Fixed::operator-(Fixed const & rhs) {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed  Fixed::operator*(Fixed const & rhs) {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed  Fixed::operator/(Fixed const & rhs) {
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    if (this != &rhs) {
        this->_rawBits = rhs.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(Fixed const & rhs) {
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) {
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) {
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) {
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) {
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) {
    return (this->getRawBits() != rhs.getRawBits());
}

Fixed::~Fixed(void) {
    return ;
}

Fixed::Fixed(void) {
    this->_n = 0;
    this->_rawBits = 0;
    return ;
}

Fixed &Fixed::operator++() {
    this->_rawBits += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed copy(*this);
    ++(*this);
    return copy;
}

Fixed &Fixed::min(Fixed &v1, Fixed &v2) {
    return v1.getRawBits() < v2.getRawBits() ? v1 : v2;
}

Fixed const &Fixed::min(Fixed const &v1, const Fixed &v2) {
    return v1.getRawBits() < v2.getRawBits() ? v1 : v2;
}

Fixed &Fixed::max(Fixed &v1, Fixed &v2) {
    return v1.getRawBits() > v2.getRawBits() ? v1 : v2;
}

Fixed const &Fixed::max(Fixed const &v1, const Fixed &v2) {
    return v1.getRawBits() > v2.getRawBits() ? v1 : v2;
}

Fixed &Fixed::operator--() {
    this->_rawBits -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed copy(*this);
    --(*this);
    return copy;
}

Fixed::Fixed(int const bits) {
    this->_rawBits = bits << getEight();
    return ;
}

Fixed::Fixed(float const bits) {
    this->_rawBits = roundf(bits * (1 << getEight()));
    return ;
}

Fixed::Fixed(Fixed const & src) {
    *this = src;
    return ;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();
    return o;
}
