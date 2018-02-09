/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 14:07:45 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 17:13:30 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {
    std::cout << "hello" << std::endl;
    return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): name(name), dmg(damage), AP(apcost) {
    std::cout << "hello " << this->name << this->dmg << this->AP << std::endl;
    return ;
}

AWeapon::AWeapon(AWeapon const & src) {
    *this = src;
    return ;
}

AWeapon::~AWeapon() {
    return ;
}

int AWeapon::getAPCost() const {
    return this->AP;
}

int AWeapon::getDamage() const {
    return this->dmg;
}

std::string AWeapon::getName() const {
    return this->name;
}



AWeapon & AWeapon::operator=(AWeapon const & rhs) {
	this->name = rhs.getName();
    this->dmg = rhs.getDamage();
    this->AP = rhs.getAPCost();
	return *this;
}
