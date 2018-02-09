/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:16:53 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 21:36:12 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
    std::cout << "SuperTrap constructed" << std::endl;
    return ;
}

SuperTrap::SuperTrap(SuperTrap const & src) {
    std::cout << "SuperTrap constructed" << std::endl;
    *this = src;
    return ;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
    std::cout << "SuperTrap constructed" << std::endl;
    this->name = name;
    this->hitPts = getHitPts();
    this->maxHitPts = getMaxHitPts();
    this->nrjPts = getNrjPts();
    this->maxNrjPts = getmaxNrjPts();
    this->level = 1;
    this->meleeAttckDmg = getMeleeAttackDmg();
    this->rgAttackDmg = getRgdAttack();
    this->armorDmgRdction = getArmorDmgRdction();
    return ;
}

SuperTrap::~SuperTrap(void) {
    return ;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs) {
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
