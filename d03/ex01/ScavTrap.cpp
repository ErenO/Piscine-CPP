/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:12:17 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 21:33:07 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap constructed" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name): _name(name) {
    std::srand(std::time(NULL) + std::clock());
    std::cout << this->_name << " created" << std::endl;
    this->_hitPts = 100;
    this->_maxHitPts = 100;
    this->_nrjPts = 50;
    this->_maxNrjPts = 50;
    this->_level = 1;
    this->_meleeAttckDmg = 20;
    this->_rgAttackDmg = 15;
    this->_armorDmgRdction = 3;
    return ;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "This is the end " << this->_name << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    std::cout << "ScavTrap constructed" << std::endl;
    *this = src;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
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

int ScavTrap::getHitPts() {
    return this->_hitPts;
}

int ScavTrap::getMaxHitPts() {
    return this->_maxHitPts;
}

int ScavTrap::getNrjPts() {
    return this->_nrjPts;
}

int ScavTrap::getmaxNrjPts() {
    return this->_maxNrjPts;
}

int ScavTrap::getLevel() {
    return this->_level;
}

std::string ScavTrap::getName() {
    return this->_name;
}

int ScavTrap::getMeleeAttackDmg() {
    return this->_meleeAttckDmg;
}

int ScavTrap::getRgdAttack() {
    return this->_rgAttackDmg;
}

int ScavTrap::getArmorDmgRdction() {
    return this->_armorDmgRdction;
}

void ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks to " << target << ", causing " << this->_meleeAttckDmg - this->_armorDmgRdction << " points of damage,  with range" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks to " << target << ", causing " << this->_meleeAttckDmg - this->_armorDmgRdction << " points of damage,  with melee" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name << " take damage of " << amount - this->_armorDmgRdction << std::endl;
    this->_hitPts -= (amount - this->_armorDmgRdction);
    if (this->_hitPts < 0) {
        this->_hitPts = 0;
    }
}

void ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP " << this->_name << " repaired by " << amount << std::endl;
    if (((unsigned int)this->_hitPts + amount) <= (unsigned int)this->_maxHitPts)
        this->_hitPts += amount;
}

void ScavTrap::challengeNewcomer(std::string const & target) {
    int output = 0 + (rand() % static_cast<int>(4 - 0 + 1));
    std::cout << "FR4G-TP " << this->_name << " challenge " << target << " with "<< ScavTrap::random[output] << std::endl;
}

std::string ScavTrap::random[] = {"nem", "kebab", "booba", "bounty", "iPhone"};
