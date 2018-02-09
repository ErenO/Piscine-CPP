/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 11:41:58 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 19:19:13 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N) {
    std::cout << "Constructor" << std::endl;
    this->_horde = new Zombie[N];
    this->setZombieAttr(N);
    this->announce(N);
    return ;
}

void ZombieHorde::setZombieAttr(int N) {
    for (int i = 0; i < N; ++i) {
        this->_horde[i].setName(randomChump());
        this->_horde[i].setType("Walkers");
    }
}

void ZombieHorde::announce(int N) {
    for (int i = 0; i < N; ++i) {
        this->_horde[i].announce();
    }
}

std::string ZombieHorde::randomChump() {
    int len = 6;

    std::string alphanum = "abcdejklmnfghiopqrstuvwxyz";
    std::string result;
    result.resize(len);
    for (int i = 0; i < len; ++i) {
        result[i] = alphanum[rand() % alphanum.length()];
    }
    return (result);
}

ZombieHorde::~ZombieHorde(void) {
    std::cout << "Destructor" << std::endl;
    delete [] this->_horde;
    return ;
}
