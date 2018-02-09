//
//  Map.hpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#ifndef Map_hpp
# define Map_hpp

# include <stdio.h>
# include "Player.hpp"
# include "Enemy.hpp"
# include "Display.hpp"


class Map {

    
private:
        struct List_Enemies {
        public:
            Enemy *                 elem;
            struct List_Enemies *   next;
        };
        struct List_Missiles {
        public:
            Missile *               elem;
            struct List_Missiles *  next;
    };
        Player          *_player;
        List_Enemies    *_enemies_list;
        List_Missiles   *_missiles_list;
        Display  &      _ncurses;
        void    _addEnemy( Enemy * );
        void    _removeEnemy( AEntity * );
        void    _removeMissile( AEntity * );
        void    _checkCollision( AEntity *elem );
        void    _randomCreate( void );
        
    public:
        Map( Display & ncurses );
        Map( Map const & src );
        ~Map();
        
        Map &   operator=(Map const & rhs);
        
        void    addMissile( Missile * );
        void    enemiesTurn( int );
        void    missilesTurn( int );
        Player  &getPlayer( void );


    protected:

};


#endif /* Map_hpp */
