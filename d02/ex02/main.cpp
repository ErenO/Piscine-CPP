/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 08:56:45 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 19:12:05 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}


// int main( void ) {
//
//
// Fixed k;
// Fixed  l( Fixed( 5.05f ) * Fixed( 2 ) );
//
// Fixed c(1.1f);
// Fixed d(2.2f);
// Fixed e(3);
// Fixed f(4);
//
// std::cout << "k toInt:   " << k.toInt() << std::endl;
// std::cout << "k toFloat: " << k.toFloat() << std::endl;
//
// std::cout << "l toInt:   " << l.toInt() << std::endl;
// std::cout << "l toFloat: " << l.toFloat() << std::endl;
//
// std::cout << "c toInt:   " << c.toInt() << std::endl;
// std::cout << "c toFloat: " << c.toFloat() << std::endl;
//
// std::cout << "d toInt:   " << d.toInt() << std::endl;
// std::cout << "d toFloat: " << d.toFloat() << std::endl;
//
// std::cout << "e toInt:   " << e.toInt() << std::endl;
// std::cout << "e toFloat: " << e.toFloat() << std::endl;
//
// std::cout << "f toInt:   " << f.toInt() << std::endl;
// std::cout << "f toFloat: " << f.toFloat() << std::endl;
//
// std::cout << "k+l : " << (k + l ) << std::endl;
// std::cout << "d+e : " << (d + e ) << std::endl;
// std::cout << "c+d : " << (c + d ) << std::endl;
// std::cout << "c-l : " << (c - l) << std::endl;
// std::cout << "l/c : " << (l / c) << std::endl;
// std::cout << "l*c : " << (l * c) << std::endl;
// std::cout << "++k : " << ++k << std::endl;
// std::cout << "l++ : " << l++ << std::endl;
//
// std::cout << "(l < c) : "<< (l < c) << std::endl;
// std::cout << "(c < l) : "<< (c < l) << std::endl;
//
//
// std::cout << k << std::endl;
// std::cout << ++k << std::endl;
// std::cout << k << std::endl;
// std::cout << k++ << std::endl;
// std::cout << k << std::endl;
// std::cout << l << std::endl;
// std::cout << Fixed::max( k, l ) << std::endl;
//
//
// std::cout << "10/2 : " << (Fixed(10) / Fixed(2)) << std::endl;
// std::cout << "10.1/2.1 : " << (Fixed(10.1f) / Fixed(2.1f)) << std::endl;
//
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }
