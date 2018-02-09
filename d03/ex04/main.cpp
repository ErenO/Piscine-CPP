/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 08:56:28 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 22:43:24 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main() {
    SuperTrap *a = new SuperTrap("hello");

    std::cout << a->getHitPts() << std::endl;
    std::cout << a->getMaxHitPts() << std::endl;
    std::cout << a->getNrjPts() << std::endl;
    std::cout << a->getmaxNrjPts() << std::endl;
    std::cout << a->getMeleeAttackDmg() << std::endl;
    std::cout << a->getRgdAttack() << std::endl;
    std::cout << a->getArmorDmgRdction() << std::endl;

    return (0);

}
