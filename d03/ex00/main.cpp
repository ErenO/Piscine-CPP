/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 08:56:28 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 10:45:36 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main() {
    FragTrap *a = new FragTrap("a");
    FragTrap *b = new FragTrap("b");

    a->rangedAttack("b");
    b->rangedAttack("a");
    a->takeDamage(30);
    std::cout << "Hit points " << a->getHitPts() << std::endl;
    a->takeDamage(30);
    std::cout << "Hit points " << a->getHitPts() << std::endl;
    a->takeDamage(30);
    std::cout << "Hit points " << a->getHitPts() << std::endl;
    a->takeDamage(30);
    std::cout << "Hit points " << a->getHitPts() << std::endl;
    a->takeDamage(30);
    std::cout << "Hit points " << a->getHitPts() << std::endl;
    b->meleeAttack("a");
    a->vaulthunter_dot_exe("a");
    a->vaulthunter_dot_exe("a");
    a->beRepaired(20);
    std::cout << "Hit points " << a->getHitPts() << std::endl;
    delete(a);
    delete(b);
    return (0);
}
