/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:41:54 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 17:10:02 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle",5,21) {
    this->dmg = 21;
    this->AP = 5;
    this->name = "PlasmaRifle";
    return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
    *this = src;
    return ;
}

PlasmaRifle::~PlasmaRifle() {
    return ;
}

void PlasmaRifle::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs) {
	this->name = rhs.getName();
    this->dmg = rhs.getDamage();
    this->AP = rhs.getAPCost();
	return *this;
}
