/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 09:48:10 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 12:46:04 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(Sorcerer const & src) {
    *this = src;
    return ;
}
Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
    return ;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
    return ;
}

void Sorcerer::polymorph(Victim const &src) {
    src.getPolymorphed();
}

void Sorcerer::intro() const {
    std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies !" << std::endl;
}

std::string Sorcerer::getName() const {
    return this->_name;
}

std::string Sorcerer::getTitle() const {
    return this->_title;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i) {
		o <<  "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;
		return o;
}
