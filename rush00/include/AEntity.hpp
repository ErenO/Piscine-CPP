//
//  AEntity.hpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#ifndef AEntity_hpp
# define AEntity_hpp

# include <iostream>
# include <stdio.h>
# include "Display.hpp"
# define X_MAX 0
# define Y_MAX 0
# define X_MIN 0
# define Y_MIN 0

enum type {PLAYER = 0, ENEMY, MISSILE};

class AEntity {

private:

public:
    AEntity(void);
    AEntity(int type, int nbLives, int x, int y, int color, char shape, Display const & ncurses);
    AEntity(int type, int nbLives, int x, int y, int color, char shape, Display const & ncurses, int speed);
    AEntity(AEntity const & src);
    ~AEntity(void);

    int getX() const;
    int getY() const;
    int getSpeed() const;
    int getColor() const;
    int getType() const;
    int getNbLives() const;
    char getShape() const;    

    void moveRight(Display const & ncurses);
    void moveLeft(Display const & ncurses);
    void moveTop(Display const & ncurses);
    void moveBottom(Display const & ncurses);

    bool takeDamage( void );

    AEntity &   operator=(AEntity const & rhs);
    bool        operator==(AEntity const & rhs) const;
    bool        operator!=(AEntity const & rhs) const;
    
    
protected:
    int _type;
    int _nbLives;
    int _x;
    int _y;
    int _speed;
    int _color;
    char _shape;
};


#endif /* AEntity_hpp */
