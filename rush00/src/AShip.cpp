//
//  AShip.cpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#include "AShip.hpp"

AShip::AShip( void )  {
    return ;
}

AShip::AShip( AShip const & src ) {
    *this = src;
    return ;
}

AShip::~AShip( void ) {
    return ;
}

Missile *AShip::sendProjectile( Display const & ncurses ) {
    (void)ncurses;
    if (_type == PLAYER) {
        return (new Missile(_x + 1, _y, 1, 1, ncurses));
    } else if (_type == ENEMY) {
        return (new Missile(_x - 1, _y, -1, 1, ncurses));
    }
    return NULL;                
}

bool AShip::takeDamage( void ) {
    _nbLives -= 1;
    return _nbLives > 0;
}


bool AShip::takeDamage( Display const & ncurses ) {
    _nbLives -= 1;
    if (_type == PLAYER)
        ncurses.life(_nbLives);
    if (_nbLives > 0)
        ncurses.print(_shape, _x, _y, _color);
    return _nbLives > 0;
}


// AShip & AShip::operator=(AShip const & rhs) {
// 	return *this;
// }
