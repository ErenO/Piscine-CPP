/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 08:56:28 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 18:43:15 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
    FragTrap *a = new FragTrap("Frag");
    ScavTrap *b = new ScavTrap("Scav");
    NinjaTrap *c = new NinjaTrap("Ninja");
    ClapTrap *d = new FragTrap("Clap");

    std::cout << "FragTrap" << std::endl;
    a->rangedAttack("Scav");
    b->rangedAttack("Frag");
    a->takeDamage(30);
    std::cout << "Hit points " << a->getHitPts() << std::endl;
    a->takeDamage(30);
    b->meleeAttack("Frag");
    a->vaulthunter_dot_exe("Frag");
    a->vaulthunter_dot_exe("Frag");
    a->beRepaired(20);
    std::cout << "Hit points " << a->getHitPts() << std::endl;
    std::cout << "--------------------" << std::endl;
    c->ninjaShoebox(*a);
    c->ninjaShoebox(*b);
    c->ninjaShoebox(*c);
    c->ninjaShoebox(*d);
    std::cout << "--------------------" << std::endl;
    std::cout << "A Hit points " << a->getHitPts() << std::endl;
    std::cout << "B Hit points " << b->getHitPts() << std::endl;
    std::cout << "C Hit points " << c->getHitPts() << std::endl;
    std::cout << "D Hit points " << d->getHitPts() << std::endl;
    delete(a);
    delete(b);
    delete(c);
    delete(d);
    return (0);

}
