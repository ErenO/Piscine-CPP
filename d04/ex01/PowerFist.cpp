//
//  PowerFist.cpp
//  piscine cpp
//
//  Created by <author> on 06/10/2017.
//
//

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
    return ;
}

PowerFist::PowerFist(PowerFist const & src) {
    *this = src;
    return ;
}

PowerFist::~PowerFist() {
    return ;
}
void PowerFist::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs) {
	this->name = rhs.getName();
    this->dmg = rhs.getDamage();
    this->AP = rhs.getAPCost();
	return *this;
}
