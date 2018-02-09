/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 08:56:28 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 11:27:07 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap *a = new FragTrap("a");
    FragTrap *b = new FragTrap("b");

    std::cout << "FragTrap" << std::endl;
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


    std::cout << "ScavTrap" << std::endl;
    ScavTrap *c = new ScavTrap("c");
    ScavTrap *d = new ScavTrap("d");
    c->rangedAttack("d");
    d->rangedAttack("b");
    c->takeDamage(30);
    std::cout << "Hit points " << c->getHitPts() << std::endl;
    c->takeDamage(30);
    std::cout << "Hit points " << c->getHitPts() << std::endl;
    c->takeDamage(30);
    std::cout << "Hit points " << c->getHitPts() << std::endl;
    c->takeDamage(30);
    std::cout << "Hit points " << c->getHitPts() << std::endl;
    c->takeDamage(30);
    std::cout << "Hit points " << c->getHitPts() << std::endl;
    d->meleeAttack("c");
    c->challengeNewcomer("d");
    c->challengeNewcomer("d");
    c->beRepaired(20);
    std::cout << "Hit points " << c->getHitPts() << std::endl;
    delete(c);
    delete(d);
    return (0);

}
