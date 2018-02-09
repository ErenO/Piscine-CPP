/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:24:43 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 15:51:10 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"
#include <sstream>
#include <string>
#include <iostream>

Human::Human(void) {
    return ;
}

std::string Human::identify() {
    return brain.identify();
}

Brain const & Human::getBrain() {
    return brain;
}

Human::~Human(void) {
    return ;
}
