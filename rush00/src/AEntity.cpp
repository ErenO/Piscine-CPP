//
//  AEntity.cpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#include "AEntity.hpp"

AEntity::AEntity(int type,int nbLives, int x, int y, int color, char shape, Display const & ncurses, int speed)
    : _type(type),
    _nbLives(nbLives),
    _x(x),
    _y(y),
    _speed(speed),
    _color(color),
    _shape(shape)
{
    ncurses.print(_shape, _x, _y, _color);
    return ;
}

AEntity::AEntity(int type,int nbLives, int x, int y, int color, char shape, Display const & ncurses)
: _type(type),
_nbLives(nbLives),
_x(x),
_y(y),
_color(color),
_shape(shape)
{
    ncurses.print(_shape, _x, _y, _color);
    return ;
}


AEntity::AEntity() {
    return ;
}

AEntity::AEntity( AEntity const & src ) {
    *this = src;
    return ;
}

AEntity::~AEntity( void ) {
    return ;
}

bool    AEntity::operator==(AEntity const & rhs) const {
    return (_x == rhs.getX() && _y == rhs.getY());
}

bool    AEntity::operator!=(AEntity const & rhs) const {
    return (_x != rhs.getX() || _y != rhs.getY());
}


/*
** Getters
*/

int AEntity::getX() const {
    return this->_x;
}

int AEntity::getY() const {
    return this->_y;
}

int AEntity::getSpeed() const {
    return this->_speed;
}

int AEntity::getColor() const {
    return this->_color;
}

int AEntity::getType() const {
    return this->_type;
}

int AEntity::getNbLives() const {
    return this->_nbLives;
}

char AEntity::getShape() const {
    return this->_shape;
}


/*
** fonctions de moves
*/

void AEntity::moveRight(Display const & ncurses) {
    if (_x < ncurses.getMaxX()){
        ncurses.print(' ', _x, _y);
        ncurses.print(_shape, ++_x, _y, _color);
    }
}

void AEntity::moveLeft(Display const & ncurses) {
    if (_x > ncurses.getMinX()){
        ncurses.print(' ', _x, _y);
        ncurses.print(_shape, --_x, _y, _color);
    }
}

void AEntity::moveTop(Display const & ncurses) {
    if (_y > ncurses.getMinY()){
        ncurses.print(' ', _x, _y);
        ncurses.print(_shape, _x, --_y, _color);
    }
}

void AEntity::moveBottom(Display const & ncurses) {
    if (_y < ncurses.getMaxY()){
        ncurses.print(' ', _x, _y);
        ncurses.print(_shape, _x, ++_y, _color);
    }
}

bool AEntity::takeDamage( void ) {
    _nbLives -= 1;
    return _nbLives > 0;
}


AEntity & AEntity::operator=(AEntity const & rhs) {
	this->_x = rhs.getX();
    this->_y = rhs.getY();
	return *this;
}
