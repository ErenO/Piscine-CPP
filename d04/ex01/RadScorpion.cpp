/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 14:41:34 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 15:41:08 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RadScorpion.hpp"

RadScorpion::RadScorpion()  {
    std::cout << "* click click click *" << std::endl;
    this->hp = 80;
    this->type = "RadScorpion";
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs) {
	this->type = rhs.getType();
    this->hp = rhs.getHP();
	return *this;
}
