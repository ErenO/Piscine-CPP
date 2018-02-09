/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:12:17 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 21:31:39 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "Hi FragTrap" << std::endl;
    std::srand(std::time(NULL) + std::clock());
    this->name = name;
    this->hitPts = 100;
    this->maxHitPts = 100;
    this->nrjPts = 100;
    this->maxNrjPts = 100;
    this->level = 1;
    this->meleeAttckDmg = 30;
    this->rgAttackDmg = 20;
    this->armorDmgRdction = 5;
    return ;
}

FragTrap::FragTrap(FragTrap const & src) {
    std::cout << "FragTrap constructed" << std::endl;
    *this = src;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
    std::cout << "FragTrap constructed" << std::endl;
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

FragTrap::~FragTrap(void) {
    std::cout << "Bye FragTrap" << std::endl;
    return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if ((this->nrjPts - 25) > 0) {
        int output = 0 + (rand() % static_cast<int>(4 - 0 + 1));
        std::cout << "FR4G-TP " << this->name << " attacks " << target << " at "<< FragTrap::random[output] << std::endl;
        this->nrjPts -= 25;
    } else {
        std::cout << "It's out of energy." << std::endl;
    }
}


std::string FragTrap::random[] = {"bits", "beat", "beans", "bounty", "snickers"};
