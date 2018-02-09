/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:14:48 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 10:39:34 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor is called" << std::endl;
    this->_n = 0;
    this->_rawBits = 0;
    return ;
}

Fixed::Fixed(int const bits) : _rawBits(bits){
    return ;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor is called" << this->_rawBits << std::endl;
    *this = src;
    return ;
}


int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
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
