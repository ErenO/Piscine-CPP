//
//  Map.cpp
//  rush00
//
//  Created by <author> on 07/10/2017.
//
//

#include "Map.hpp"

Map::Map( Display & ncurses )
    : _player(new Player(10,10, ncurses)),
    _ncurses(ncurses)
{
    _enemies_list = NULL;
    _missiles_list = NULL;
    return;
}

// Map::Map( Map const & src ) : _ncurses(src.getNcurses()) {
//     *this = src;
//     return;
// }


Map::~Map() {
    List_Enemies*   tmp_enemies;
    List_Missiles*  tmp_missiles;

    while(_enemies_list) {
        delete _enemies_list->elem;
        tmp_enemies = _enemies_list;
        _enemies_list = _enemies_list->next;
        delete tmp_enemies;
    }
    while(_missiles_list) {
        delete _missiles_list->elem;
        tmp_missiles = _missiles_list;
        _missiles_list = _missiles_list->next;
        delete tmp_missiles;
    }
    delete _player;
    return ;
}

Map & Map::operator=(Map const & rhs) {
    if (this != &rhs) {
        ;
    }
    return *this;
}

void    Map::_addEnemy( Enemy * elem ){
    _ncurses.print(elem->getShape(), elem->getX(), elem->getY());
    if( !_enemies_list )
    {
       _enemies_list = new List_Enemies();
       _enemies_list->elem = elem;
       _enemies_list->next = NULL;
    }
    else
    {
        List_Enemies* tmp = _enemies_list;
        while( tmp->next != NULL )
            tmp = tmp->next;
        tmp->next = new List_Enemies();
        tmp = tmp->next;
        tmp->elem = elem;
        tmp->next = NULL;
    }
}

void    Map::addMissile( Missile * elem ){
    _ncurses.print(elem->getShape(), elem->getX(), elem->getY());
    if( !_missiles_list )
    {
       _missiles_list = new List_Missiles();
       _missiles_list->elem = elem;
       _missiles_list->next = NULL;
    }
    else
    {
        List_Missiles* tmp = _missiles_list;
        while( tmp->next != NULL )
            tmp = tmp->next;
        tmp->next = new List_Missiles();
        tmp = tmp->next;
        tmp->elem = elem;
        tmp->next = NULL;
    }
}

void    Map::_removeEnemy( AEntity * elem ){
    List_Enemies* tmp = _enemies_list;

    _ncurses.print(' ', elem->getX(), elem->getY());
    if (elem == tmp->elem) {
        delete tmp->elem;
        tmp->elem = NULL;
        _enemies_list = _enemies_list->next;
        delete tmp;
    } else {
        while (tmp->next->elem != elem)
            tmp = tmp->next;
        List_Enemies *p = tmp->next;
        tmp->next = tmp->next->next;
        delete p->elem;
        p->elem = NULL;
        delete p;
        p = NULL;
    }
}

void    Map::_removeMissile( AEntity * elem ){
    List_Missiles* tmp = _missiles_list;
    _ncurses.print(' ', elem->getX(), elem->getY());
    if (elem == tmp->elem) {
        delete tmp->elem;
        tmp->elem = NULL;
        _missiles_list = _missiles_list->next;
        delete tmp;
        tmp = NULL;
    } else {
        while (tmp->next->elem != elem)
            tmp = tmp->next;
        List_Missiles *p = tmp->next;
        tmp->next = tmp->next->next;
        delete p->elem;
        p->elem = NULL;
        delete p;
        p = NULL;
    }
}

void    Map::_randomCreate( void ) {
    int y_max = _ncurses.getMaxY();
    int y_min = _ncurses.getMinY();
    int x = _ncurses.getMaxX();
    int y = rand()%(y_max - y_min + 1) + y_min;
    int speed = rand()%4 + 4;

    _addEnemy(new Enemy(x, y, speed, _ncurses));
}

void    Map::_checkCollision(AEntity *elem) {
    List_Missiles*  missile = _missiles_list;
    List_Enemies*   enemy = _enemies_list;
    switch (elem->getType()){
        case ENEMY:
            if (elem->getX() == _ncurses.getMinX()) {
                _removeEnemy(elem);
                break;
            }
            if (*elem == *_player) {
                if (!elem->takeDamage())
                    _removeEnemy(elem);
                if (!_player->takeDamage( _ncurses ))
                    _ncurses.finish(_player->getScore());
                }
            break;
        case MISSILE:
            if (elem->getX() == _ncurses.getMinX()
             || elem->getX() == _ncurses.getMaxX()) {
                _removeMissile(elem);
                break;
            }
            while (missile && *(missile->elem) != *elem) {
                missile = missile->next;
            }
            if (*elem == *_player && missile->elem->getDir() == -1) {
                if (!elem->takeDamage())
                    _removeMissile(elem);
                if (!_player->takeDamage( _ncurses ))
                    _ncurses.finish(_player->getScore());
                break;
            }
            while (enemy && missile->elem->getDir() == 1) {
                if (*(enemy->elem) == *elem) {
                    _player->addToScore(10);
                    if (!enemy->elem->takeDamage())
                        _removeEnemy(enemy->elem);
                    if (!elem->takeDamage())
                        _removeMissile(elem);
                    break;
                }
                enemy = enemy->next;
            }
            break;
        case PLAYER:
            while (missile) {
                if (*(missile->elem) == *_player) {
                    if (!missile->elem->takeDamage())
                        _removeMissile(missile->elem);
                    if (!_player->takeDamage( _ncurses ))
                        _ncurses.finish(_player->getScore());
                    break;
                }
                missile = missile->next;
            }
            while (enemy) {
                if (*(enemy->elem) == *_player) {
                    if (!enemy->elem->takeDamage())
                        _removeEnemy(enemy->elem);
                    if (!_player->takeDamage( _ncurses ))
                        _ncurses.finish(_player->getScore());
                    break;
                }
                enemy = enemy->next;
            }
            break;
    }
}

Player &Map::getPlayer( void ) {
    return *_player;
}

void    Map::enemiesTurn( int turn ) {
    List_Enemies* tmp = _enemies_list;
    Enemy*  enemy;
    // Missile *missile;
    while (tmp) {
        enemy = tmp->elem;
        if (turn % enemy->getSpeed() == 0) {
            enemy->moveLeft(_ncurses);
            _checkCollision(enemy);
        }
        // if (turn % 20 == 0 && rand()%50 == 0) {
        //     missile = enemy->sendProjectile(_ncurses);
        //     if (missile) {
        //         addMissile(missile);
        //     }
        // }
        tmp = tmp->next;
    }

    if (rand()%15 == 0) {
        _randomCreate();
    }
}

void    Map::missilesTurn( int turn ) {
    List_Missiles* tmp = _missiles_list;
    Missile*    missile;

    while (tmp) {
        missile = tmp->elem;
        if (missile != NULL) {
            if (turn % missile->getSpeed() == 0) {
                if (missile->getDir() == 1)
                missile->moveRight(_ncurses);
                else
                missile->moveLeft(_ncurses);
                _checkCollision(missile);
            }
        }
        tmp = tmp->next;
    }
}
