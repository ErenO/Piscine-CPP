/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:46:05 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 19:17:18 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) {
    return ;
}

ZombieEvent::~ZombieEvent(void) {
    return ;
}

void ZombieEvent::setZombieType(std::string t) {
    this->_type = t;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie *zombie = new Zombie();
    zombie->setType(this->_type);
    zombie->setName(name);
    return zombie;
}

Zombie* ZombieEvent::randomChump() {
    int len = 6;

    std::string alphanum = "abcdejklmnfghiopqrstuvwxyz";
    std::string result;
    result.resize(len);

    for (int i = 0; i < len; ++i) {
        result[i] = alphanum[rand() % alphanum.length()];
    }

    Zombie *zombie = newZombie(result);
    zombie->announce();
    return (zombie);
}
