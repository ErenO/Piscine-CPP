//
//  AShip.hpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#ifndef AShip_hpp
# define AShip_hpp

# include "AEntity.hpp"
# include "Missile.hpp"
# include <stdio.h>

class AShip : public virtual AEntity {
public:
    AShip(void);
    AShip(AShip const & src);
    ~AShip(void);
    //position sur la map
    // Missile *sendProjectile(AEntity *elem);
    Missile *sendProjectile( Display const & ncurses );
    // AShip & operator=(AShip const & rhs);

    bool takeDamage( void );
    bool takeDamage( Display const & ncurses );

private:

protected:

};


#endif /* AShip_hpp */
