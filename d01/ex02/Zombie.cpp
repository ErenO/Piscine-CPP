/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:41:09 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 19:11:25 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {
    return ;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie dead" << std::endl;
    return ;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::setType(std::string type) {
    this->_type = type;
}

void Zombie::announce(void) {
    std::cout << "< " << this->_name << "(" << this->_type << ") > Braiiiiiiinnnssss..." << std::endl;
}
