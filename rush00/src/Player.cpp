//
//  Player.cpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#include "Player.hpp"

Player::Player( void ) {
    return ;
}
// _type(PLAYER), _nbLives(3), _x(x), _y(y), _time(time), color(102), _shape('>')
Player::Player(int x, int y, Display const & ncurses) 
    : AEntity(PLAYER, 3, x, y, 102, '>', ncurses),
    _score(0)
{
    return ;
}

Player::Player( Player const & src ) {
    *this = src;
    return ;
}

Player::~Player( void ) {
    return ;
}

int Player::getNbLives( void ) const {
    return this->_nbLives;
}

int Player::getScore( void ) const {
    return _score;
}

void    Player::addToScore(int add) {
    _score += add;
}


// Player & Player::operator=(Player const & rhs) {
// 	this->_x = rhs.getX();
//     this->_y = rhs.getY();
//     this->_isAlive = rhs.getIsAlive();
// 	return *this;
// }
