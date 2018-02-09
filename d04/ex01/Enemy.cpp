/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:28:35 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 15:42:12 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {
    return ;
}

Enemy::Enemy(int hp, std::string const & type): hp(hp), type(type) {
    return ;
}

Enemy::Enemy(Enemy const & src) {
    *this = src;
    return ;
}

Enemy::~Enemy() {
    return ;
}

std::string Enemy::getType() const {
    return this->type;
}

int Enemy::getHP() const {
    return this->hp;
}

void Enemy::takeDamage(int dmg) {
    if (dmg > 0 && this->hp - dmg > 0) {
        this->hp -= dmg;
    }
    return ;
}

Enemy & Enemy::operator=(Enemy const & rhs) {
	this->type = rhs.getType();
    this->hp = rhs.getHP();
	return *this;
}
