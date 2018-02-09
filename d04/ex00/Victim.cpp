/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:30:50 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 11:37:44 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {
    return ;
}

Victim::Victim(Victim const & src) {
    *this = src;
    return ;
}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
    return ;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name << " has been turned into a cute little sheep !" << std::endl;
    return ;
}

void Victim::intro() const {
    std::cout << "I'm " << this->_name << " and I like otters !" << std::endl;
    return ;
}

Victim & Victim::operator=(Victim const & rhs) {
	this->_name = rhs.getName();
	return *this;
}

std::string Victim::getName() const {
    return this->_name;
}

void Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Victim const &i)
{
		o <<  "I'm " << i.getName() << " and I like otters !" << std::endl;
		return o;
}
