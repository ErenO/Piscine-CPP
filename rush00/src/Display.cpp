/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 11:18:42 by amineau           #+#    #+#             */
/*   Updated: 2017/10/08 19:58:25 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Display.hpp"

Display::Display( void )
    : end(false),
    restart(false)
{
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();
    start_color();
    _init_color_pair();
    getmaxyx(stdscr, _y, _x);
    _x_score = _x > 50 ? 30 : 0;
    curs_set(0);
    menu();
    nodelay(stdscr, TRUE);
    start(&_game, _y, _x - _x_score);
    if (_x_score)
        start(&_score, _y, _x_score, 0, _x - _x_score);
    return;
}

Display::Display( Display const & src ) {
    *this = src;
    return ;
}

Display::~Display( void ) {
    if (_x_score)
        stop(&_score);
    stop(&_game);
    endwin();
    return;
}

Display & Display::operator=(Display const & rhs) {
    if (this != &rhs) {
        ;
    }
    return *this;
}

void    Display::menu( void ) const {
    mvprintw(_y / 2, (_x / 2) - 10, "Tap Space for start");
    refresh();
    while (getch() != ' '){
        ;
    }
}

void    Display::finish( int score ) {
    nodelay(stdscr, FALSE);
    wclear(_game);
    mvprintw(_y / 2, (_x / 2) - 10, "Your score : %d !", score);
    mvprintw((_y / 2) + 2, (_x / 2) - 22, "Tap space for restart, or another for exit !", score);
    refresh();
    restart = (getch() == ' ');
    end = true;
}

void    Display::start( WINDOW ** win, int heigth, int width ) {
    *win = newwin(heigth, width , 0, 0);
    wattron(*win, COLOR_PAIR(101));
    box(*win, 0, 0);
    wattroff(*win, COLOR_PAIR(101));
}

void    Display::start( WINDOW ** win, int heigth, int width, int start_h, int start_w ) {
    *win = newwin(heigth, width , start_h, start_w);
    wattron(*win, COLOR_PAIR(101));
    box(*win, 0, 0);
    wattroff(*win, COLOR_PAIR(101));
    wrefresh(*win);
}


void    Display::stop( WINDOW ** win ) {
    delwin(*win);
}

int     Display::character( void ) const {
    int ch = getch();
    ungetch(ch);
    getch();
    return ch;
}

void    Display::score(int score) const {
    if (_x_score){
        wattron(_score, COLOR_PAIR(102));
        mvwprintw(_score, (_y / 2) - 2, 5, "Score : %d      ", score);
        wattroff(_score, COLOR_PAIR(102));
        wrefresh(_score);
    }
}

void    Display::life(int life) const {
    if (_x_score) {
        wattron(_score, COLOR_PAIR(102));
        mvwprintw(_score, (_y / 2) + 2, 5, "Life : %d      ", life);
        wattroff(_score, COLOR_PAIR(102));
        wrefresh(_score);
    }
}

void    Display::print( char c, int x, int y ) const {
    mvwaddch(_game, y, x, c);
}

void    Display::print( char c, int x, int y, int color ) const {
    wattron(_game, COLOR_PAIR(color));
    mvwaddch(_game, y, x, c);
    wattroff(_game, COLOR_PAIR(color));
}

void    Display::fresh( void ) const {
    wrefresh(_game);
}

int     Display::getMaxX() const {
    return _x - _x_score - 2;
}
int     Display::getMinX() const {
    return 1;
}
int     Display::getMaxY() const {
    return _y - 2;
}
int     Display::getMinY() const {
    return 1;
}

void    Display::_init_color_pair() const {
    init_color(COLOR_WHITE, 400, 400, 400);
    init_pair(101, COLOR_WHITE, COLOR_WHITE); // BORDER MAP
    init_pair(102, COLOR_GREEN, COLOR_BLACK); // SHIP PLAYER
    init_pair(103, COLOR_RED, COLOR_BLACK); // SHIP ENEMY
    init_pair(104, COLOR_YELLOW, COLOR_BLACK); // MISSILE PLAYER
    init_pair(105, COLOR_YELLOW, COLOR_BLACK); // MISSILE ENEMY
}
