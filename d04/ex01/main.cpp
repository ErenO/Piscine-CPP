/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:23:33 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 16:39:25 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "Character.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
int main()
{
    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    return 0;
}

// zaz@blackjack ex01 $ clang++ -W -Wall -Werror *.cpp
// zaz@blackjack ex01 $ ./a.out | cat -e
// zaz has 40 AP and is unarmed$
// * click click click *$
// zaz has 40 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Power Fist$
// * pschhh... SBAM! *$
// zaz has 32 AP and wields a Power Fist$
// zaz has 32 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// zaz has 27 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// * SPROTCH *$
// zaz has 22 AP and wields a Plasma Rifle$
