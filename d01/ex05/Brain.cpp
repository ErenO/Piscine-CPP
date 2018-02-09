/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:19:14 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 15:50:32 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>
#include <string>

Brain::Brain( void ) {
    return ;
}

std::string Brain::identify() const {
    const void * address = static_cast<const void*>(this);
    std::stringstream ss;
    ss << address;
    std::string name = ss.str();
    return name;
}

Brain::~Brain(void) {
    return ;
}
