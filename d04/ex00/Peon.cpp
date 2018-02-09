/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 11:09:16 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 11:27:48 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {
    return ;
}

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
    this->_name = name;
    return ;
}

Peon::Peon(Peon const & src) {
    *this = src;
    return ;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
    return ;
}

void Peon::getPolymorphed() const {
    std::cout << this->_name << " has been turned into pink pony !" << std::endl;
}

Peon & Peon::operator=(Peon const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}
