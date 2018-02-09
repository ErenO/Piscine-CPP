/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:12:17 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 21:30:37 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    return ;
}

FragTrap::FragTrap(FragTrap const & src) {
    *this = src;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
    std::cout << "FragTrap constructed" << std::endl;
    this->_name = rhs._name;
    this->_hitPts = rhs._hitPts;
    this->_maxHitPts = rhs._maxHitPts;
    this->_nrjPts = rhs._nrjPts;
    this->_maxNrjPts = rhs._maxNrjPts;
    this->_level = rhs._level;
    this->_meleeAttckDmg = rhs._meleeAttckDmg;
    this->_rgAttackDmg = rhs._rgAttackDmg;
    this->_armorDmgRdction = rhs._armorDmgRdction;
    return *this;
}

FragTrap::FragTrap(std::string name): _name(name) {
    std::srand(std::time(NULL) + std::clock());
    this->_hitPts = 100;
    this->_maxHitPts = 100;
    this->_nrjPts = 100;
    this->_maxNrjPts = 100;
    this->_level = 1;
    this->_meleeAttckDmg = 30;
    this->_rgAttackDmg = 20;
    this->_armorDmgRdction = 5;
    return ;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructed" << std::endl;
    return ;
}

int FragTrap::getHitPts() {
    return this->_hitPts;
}

int FragTrap::getMaxHitPts() {
    return this->_maxHitPts;
}

int FragTrap::getNrjPts() {
    return this->_nrjPts;
}

int FragTrap::getmaxNrjPts() {
    return this->_maxNrjPts;
}

int FragTrap::getLevel() {
    return this->_level;
}

std::string FragTrap::getName() {
    return this->_name;
}

int FragTrap::getMeleeAttackDmg() {
    return this->_meleeAttckDmg;
}

int FragTrap::getRgdAttack() {
    return this->_rgAttackDmg;
}

int FragTrap::getArmorDmgRdction() {
    return this->_armorDmgRdction;
}


void FragTrap::rangedAttack(std::string const & target) {
    if (this->_hitPts != 0) {
        std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rgAttackDmg - this->_armorDmgRdction << " points of damage !" << std::endl;
    } else {
        std::cout << this->_name <<  "died." << std::endl;
    }
}

void FragTrap::meleeAttack(std::string const & target) {
    if (this->_hitPts != 0) {
        std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttckDmg - this->_armorDmgRdction << " points of damage !" << std::endl;
    } else {
        std::cout << this->_name <<  "died." << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name << " take damage of " << amount - this->_armorDmgRdction << std::endl;
    this->_hitPts -= (amount - this->_armorDmgRdction);
    if (this->_hitPts < 0) {
        this->_hitPts = 0;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP " << this->_name << "repaired by " << amount << std::endl;
    if (((unsigned int)this->_hitPts + amount) <= (unsigned int)this->_maxHitPts)
        this->_hitPts += amount;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if ((this->_nrjPts - 25) > 0) {
        int output = 0 + (rand() % static_cast<int>(4 - 0 + 1));
        std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at "<< FragTrap::random[output] << std::endl;
        this->_nrjPts -= 25;
    } else {
        std::cout << "It's out of energy." << std::endl;
    }
}

std::string FragTrap::random[] = {"bits", "beat", "beans", "bounty", "snickers"};
