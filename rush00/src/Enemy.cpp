//
//  Enemy.cpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#include "Enemy.hpp"


Enemy::Enemy( void )  {
    return ;
}
//_type(ENEMY), _nbLives(3), _x(x), _y(y), _time(time), ,_color(103) _shape('>')
Enemy::Enemy(int x, int y, int speed, Display const & ncurses) : AEntity(ENEMY, 1, x, y, 103,'#', ncurses, speed) {
    return ;
}

Enemy::Enemy( Enemy const & src ) {
    *this = src;
    return ;
}

Enemy::~Enemy( void ) {
    return ;
}

Enemy & Enemy::operator=(Enemy const & rhs) {
    if (this != &rhs){
        _type = ENEMY;
        _x = rhs.getX();
        _y = rhs.getY();
        _nbLives = rhs.getNbLives();
        _shape = rhs.getShape();
    }
	return *this;
}
