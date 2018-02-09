/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 12:53:04 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 22:24:15 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    std::cout << "Hi ClapTrap" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
    *this = src;
    return ;
}

ClapTrap::ClapTrap(std::string name) : name(name) {
    std::cout << "Hi ClapTrap" << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Bye ClapTrap" << std::endl;
    return ;
}

int ClapTrap::getHitPts() {
    return this->hitPts;
}

int ClapTrap::getMaxHitPts() {
    return this->maxHitPts;
}

int ClapTrap::getNrjPts() {
    return this->nrjPts;
}

int ClapTrap::getmaxNrjPts() {
    return this->maxNrjPts;
}

int ClapTrap::getLevel() {
    return this->level;
}

std::string ClapTrap::getName() {
    return this->name;
}

int ClapTrap::getMeleeAttackDmg() {
    return this->meleeAttckDmg;
}

int ClapTrap::getRgdAttack() {
    return this->rgAttackDmg;
}

int ClapTrap::getArmorDmgRdction() {
    return this->armorDmgRdction;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
    this->name = rhs.name;
    this->hitPts = rhs.hitPts;
    this->maxHitPts = rhs.maxHitPts;
    this->nrjPts = rhs.nrjPts;
    this->maxNrjPts = rhs.maxNrjPts;
    this->level = rhs.level;
    this->meleeAttckDmg = rhs.meleeAttckDmg;
    this->rgAttackDmg = rhs.rgAttackDmg;
    this->armorDmgRdction = rhs.armorDmgRdction;
    return *this;
}

void ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->rgAttackDmg - this->armorDmgRdction << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->meleeAttckDmg - this->armorDmgRdction << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->name << " take damage of " << amount - this->armorDmgRdction << std::endl;
    this->hitPts -= (amount - this->armorDmgRdction);
    if (this->hitPts < 0) {
        this->hitPts = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP " << this->name << "repaired by " << amount << std::endl;
    if (((unsigned int)this->hitPts + amount) <= (unsigned int)this->maxHitPts)
        this->hitPts += amount;
}
