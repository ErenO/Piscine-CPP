/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 08:53:46 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 09:29:18 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string color, std::string country): _color(color), _county(country){
    std::cout << "=> Construct" << std::endl;
    std::cout << this->_color << std::endl;
    std::cout << this->_county << std::endl;
    return ;
}

Pony::~Pony(void) {
    std::cout << "=> Destruct" << std::endl;
    return ;
}
