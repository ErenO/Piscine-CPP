/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:12:17 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 21:33:40 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap constructed" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "Hi ScavTrap" << std::endl;
    std::srand(std::time(NULL) + std::clock());
    this->name = name;
    this->hitPts = 100;
    this->maxHitPts = 100;
    this->nrjPts = 50;
    this->maxNrjPts = 50;
    this->level = 1;
    this->meleeAttckDmg = 20;
    this->rgAttackDmg = 15;
    this->armorDmgRdction = 3;
    std::cout << this->name << " created" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    std::cout << "ScavTrap constructed" << std::endl;
    *this = src;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
    std::cout << "ScavTrap constructed" << std::endl;
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

ScavTrap::~ScavTrap(void) {
    std::cout << "This is the end " << this->name << std::endl;
    return ;
}

void ScavTrap::challengeNewcomer(std::string const & target) {
    int output = 0 + (rand() % static_cast<int>(4 - 0 + 1));
    std::cout << "FR4G-TP " << this->name << " challenge " << target << " with "<< ScavTrap::random[output] << std::endl;
}


std::string ScavTrap::random[] = {"nem", "kebab", "booba", "bounty", "iPhone"};
