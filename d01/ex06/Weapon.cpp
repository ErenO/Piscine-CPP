/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 15:54:50 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 18:12:25 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string str): type(str){
    return;
}

std::string const & Weapon::getType() {

    return type;
}

void Weapon::setType(std::string str) {
    this->type = str;
}


Weapon::~Weapon(void) {
    return ;
}
