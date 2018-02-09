//
//  Enemy.hpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#ifndef Enemy_hpp
#define Enemy_hpp
# include "AShip.hpp"
#include <stdio.h>

class Enemy : virtual public AShip {
private:
public:
    Enemy( void );
    Enemy(int x, int y, int speed, Display const &);
    Enemy(Enemy const & src);
    ~Enemy( void );

    // void toMove
    //toShoot

    Enemy & operator=(Enemy const & rhs);

protected:

};


#endif /* Enemy_hpp */
