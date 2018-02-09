/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 11:18:20 by amineau           #+#    #+#             */
/*   Updated: 2017/10/08 17:28:49 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_HPP
# define DISPLAY_HPP

# include <iostream>
# include <ncurses.h>

class Display {

public:
    Display( void );
    Display( Display const & );
    ~Display( void );

    Display &	operator=( Display const & );

    void    print( char c, int x, int y ) const;
    void    print( char c, int x, int y, int color ) const;
    void    fresh( void ) const;
    int     character( void ) const;
    int     getMaxX() const;
    int     getMinX() const;
    int     getMaxY() const;
    int     getMinY() const;
    void    start( WINDOW **, int h, int w );
    void    start( WINDOW **, int h, int w, int start_h, int start_w );
    void    stop( WINDOW ** );
    void    score(int score) const;   
    void    life(int life) const;   
    void    menu( void ) const;
    void    finish( int score );
    
    bool    end;
    bool    restart;
    
private:
    WINDOW  *_game;
    WINDOW  *_score;
    int     _x;
    int     _y;
    int     _x_score;

    void    _init_color_pair() const;
};

#endif