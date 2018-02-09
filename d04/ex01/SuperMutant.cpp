/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 15:42:48 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 15:45:46 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()  {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    this->type = "Super Mutant";
    this->hp = 170;
}

SuperMutant::SuperMutant(SuperMutant const & src) {
    *this = src;
    return ;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

void SuperMutant::takeDamage(int dmg) {
    if (dmg > 0 && this->hp - dmg > 0) {
        this->hp -= dmg;
    }
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs) {
	this->type = rhs.getType();
    this->hp = rhs.getHP();
	return *this;
}
