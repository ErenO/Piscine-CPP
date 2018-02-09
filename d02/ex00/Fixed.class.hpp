/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:16:59 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 11:30:46 by eozdek           ###   ########.fr       */
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
    Fixed(Fixed const & src);
    //destructor
    ~Fixed(void);

    Fixed & operator=(Fixed const & rhs);
    int getRawBits(void) const;
    void setRawBits( int const raw );
private:

    int _n;
    static const int _eight = 8;
    int _rawBits;
};

#endif
