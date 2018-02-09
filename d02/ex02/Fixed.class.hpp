/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:16:59 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 19:09:44 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed {
public:
    //constructor
    Fixed(void);
    Fixed(int const bits);
    Fixed(float const bits);
    Fixed(Fixed const & src);
    //destructor
    ~Fixed(void);

    Fixed & operator++();
    Fixed operator++(int);
    Fixed & operator--();
    Fixed operator--(int);
    Fixed & operator=(Fixed const & rhs);
    bool operator>(Fixed const & rhs);
    bool operator<(Fixed const & rhs);
    bool operator>=(Fixed const & rhs);
    bool operator<=(Fixed const & rhs);
    bool operator==(Fixed const & rhs);
    bool operator!=(Fixed const & rhs);

    Fixed  operator+(Fixed const & rhs);
    Fixed  operator-(Fixed const & rhs);
    Fixed  operator*(Fixed const & rhs);
    Fixed  operator/(Fixed const & rhs);
    static Fixed &min(Fixed &v1, Fixed &v2);
    static Fixed &max(Fixed &v1, Fixed &v2);
    static Fixed const &max(Fixed const &v1, const Fixed &v2);
    static Fixed const &min(Fixed const &v1, const Fixed &v2);

    int getRawBits(void) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;

    static int getEight(void);
    float getF() const;
    int getI() const;

private:
    int _n;
    static const int _eight = 8;
    int _rawBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
