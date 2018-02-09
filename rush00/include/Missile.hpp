//
//  Missile.hpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#ifndef Missile_hpp
# define Missile_hpp

# include "AEntity.hpp"
# include <stdio.h>

class Missile: public virtual AEntity {
private:
    int _dir; // 1 player -1 enemy
    Missile(void);

public:
    Missile(Missile const & src);
    Missile(int x, int y, int dir, int speed, Display const &);
    ~Missile(void);
    // Missile & operator=(Missile const & rhs);

    int getDir( void ) const;
    
protected:

};


#endif /* Missile_hpp */
