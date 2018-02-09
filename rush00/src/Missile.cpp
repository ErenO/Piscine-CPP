//
//  Missile.cpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#include "Missile.hpp"

Missile::Missile( void )  {
    return ;
}

Missile::Missile(int x, int y, int dir, int speed, Display const & ncurses) : AEntity(MISSILE, 1, x, y, 0, '-', ncurses, speed) {
    this->_dir = dir; // 1 pour player -1 pour enemy
    _color = (dir == 1) ? 104 : 105;
    return ;
}

Missile::Missile( Missile const & src ) {
    *this = src;
    return ;
}

Missile::~Missile( void ) {
    return ;
}

int Missile::getDir( void ) const {
    return _dir;
}

// Missile & Missile::operator=(Missile const & rhs) {
// 	this->_x = rhs.getX();
//     this->_y = rhs.getY();
// 	return *this;
// }
