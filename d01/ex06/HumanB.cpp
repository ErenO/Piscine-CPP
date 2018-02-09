/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:06:00 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 18:47:32 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string str) {
    this->str = str;
    return ;
}

HumanB::~HumanB(void) {
    return ;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::setType(std::string str) {
    this->weapon->type = str;
}

void HumanB::attack() const {
    std::cout << this->str << " attacks with his " << this->weapon->type << std::endl;
}
