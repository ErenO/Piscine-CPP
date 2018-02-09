/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:54:52 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 21:35:21 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(void) {
    std::cout << "NINJAA constructed." << std::endl;
    return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
    std::cout << "NINJAA constructed." << std::endl;
    *this = src;
    return ;
}

NinjaTrap::NinjaTrap(std::string name) {
    std::cout << "NINJAA constructed." << std::endl;
    this->name = name;
    this->hitPts = 60;
    this->maxHitPts = 60;
    this->nrjPts = 120;
    this->maxNrjPts = 120;
    this->level = 1;
    this->meleeAttckDmg = 60;
    this->rgAttackDmg = 5;
    this->armorDmgRdction = 0;
    return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs) {
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

NinjaTrap::~NinjaTrap(void) {
    std::cout << "NINJAA destructed" << std::endl;
    return ;
}

void NinjaTrap::ninjaShoebox(ClapTrap & target) {
    int output = 0 + (rand() % static_cast<int>(4 - 0 + 1));
    std::cout << "FR4G-TP " << this->name << " ninja special attack to ClapTrap " << target.getName() << " with "<< NinjaTrap::random[output] << std::endl;
    target.takeDamage(30);
}

void NinjaTrap::ninjaShoebox(ScavTrap & target) {
    int output = 0 + (rand() % static_cast<int>(4 - 0 + 1));
    std::cout << "FR4G-TP " << this->name << " ninja special attack to ScavTrap " << target.getName() << " with "<< NinjaTrap::random[output] << std::endl;
    target.takeDamage(50);
}

void NinjaTrap::ninjaShoebox(NinjaTrap & target) {
    int output = 0 + (rand() % static_cast<int>(4 - 0 + 1));
    std::cout << "FR4G-TP " << this->name << " ninja special attack to ninja " << target.getName() << " with "<< NinjaTrap::random[output] << std::endl;
    target.takeDamage(10);
}

void NinjaTrap::ninjaShoebox(FragTrap & target) {
    int output = 0 + (rand() % static_cast<int>(4 - 0 + 1));
    std::cout << "FR4G-TP " << this->name << " ninja special attack to FragTrap " << target.getName() << " with "<< NinjaTrap::random[output] << std::endl;
    target.takeDamage(60);
}

std::string NinjaTrap::random[] = {"shuriken", "beat", "beans", "bounty", "snickers"};
