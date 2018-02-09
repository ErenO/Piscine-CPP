/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 14:14:54 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 17:15:35 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::~Character() {
    return ;
}

Character::Character() {
    return ;
}

Character::Character(std::string const & name): _name(name) {
    this->_AP = 40;
    return ;
}

Character::Character(Character const & src) {
    *this = src;
    return ;
}

std::string Character::getName() const {
    return this->_name;
}

void Character::equip(AWeapon *weapon) {
    std::cout <<"-----------------"<< std::endl;
    std::cout << weapon->getDamage() << " " << weapon->getName();
    this->_weapon = weapon;
}

void Character::attack(Enemy *target) {
    if (this->_weapon->getName() != "") {
        std::cout << this->_name << " attacks " << target->getType() << " with a " << this->_weapon->getName() << std::endl;
        (void)target;
        target->takeDamage(this->_weapon->getDamage());
    }
    return ;
}

int Character::getAP() const {
    return this->_AP;
}

std::string Character::getWeponName() const {
    if (this->_weapon->getName() != "") {
        return this->_weapon->getName();
    }
    std::cout << this->getName() << " has " << this->getAP() << " AP and is unarmed" << std::endl;
    return "no name";
}

void Character::recoverAP() {
    this->_AP += 10;
    if (this->_AP > 40) {
        this->_AP = 40;
    }
}

std::ostream	&operator<<(std::ostream &o, Character const &i)
{
		o << i.getName() << " has " << i.getAP() << " and wields a " << std::endl;
		return o;
}

Character & Character::operator=(Character const & rhs) {
	this->_name = rhs.getName();
    this->_AP = rhs.getAP();
	return *this;
}
