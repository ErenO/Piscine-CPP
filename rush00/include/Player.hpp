//
//  Player.hpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#ifndef Player_hpp
# define Player_hpp
# include <iostream>
# include <stdio.h>
# include "AShip.hpp"

class Player : public virtual AShip {
private:
    int _score;
public:

    Player(void);
    Player(int x, int y, Display const &);
    Player(Player const & src);
    ~Player(void);

    int getNbLives( void ) const;
    int getScore( void ) const;
    void    addToScore(int add);


    // Player & operator=(Player const & rhs);

protected:

};


#endif /* Player_hpp */
