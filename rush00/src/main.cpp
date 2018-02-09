/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 09:44:22 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/08 17:32:59 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AEntity.hpp"
#include "Map.hpp"
#include "Enemy.hpp"
#include "Missile.hpp"
#include "Player.hpp"
#include "Display.hpp"
#include <unistd.h>

bool    gaming() {
    Display ncurses;
    Map     game(ncurses);
    Player& player = game.getPlayer();
    int     ch = 0;
    int     turn = 0;
    
    
    ncurses.life(player.getNbLives());
    while (ch != 27 && !ncurses.end) {
        ncurses.score(player.getScore());
        ch = ncurses.character();
        if ( ch == KEY_UP ){
            player.moveTop(ncurses);
        } else if ( ch == KEY_DOWN ){
            player.moveBottom(ncurses);
        }  else if ( ch == KEY_RIGHT ){
            player.moveRight(ncurses);
        }  else if ( ch == KEY_LEFT ){
            player.moveLeft(ncurses);
        } else if ( ch == ' ' ) {
            game.addMissile(player.sendProjectile(ncurses));
        }
        game.missilesTurn(turn);
        game.enemiesTurn(turn);
        turn++;
        ncurses.fresh();
        usleep(10000);
    }
    return ncurses.restart;
}

int main() {
    while (gaming())
        ;
    return (0);
}
