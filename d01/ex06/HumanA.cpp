/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:07:56 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 18:10:21 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string str, Weapon &weapon): str(str), weapon(weapon) {
    return ;
}

HumanA::~HumanA(void) {
    return ;
}

void HumanA::setType(std::string str) {
    this->weapon.type = str;
}

void HumanA::attack() const {
    std::cout << this->str << " attacks with his " << this->weapon.type << std::endl;
}
