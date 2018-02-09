/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:38:56 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 19:12:41 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int		main( void ){
	Zombie			z1 = Zombie();
	z1.setName("baba");
	z1.setType("walkers");
	ZombieEvent		zGen = ZombieEvent();
	zGen.setZombieType("runners");
	Zombie*			z2 = zGen.newZombie("bubu");
	Zombie*			z3 = zGen.randomChump();
	z1.announce();
	z2->announce();
	delete z2;
	delete z3;
	Zombie*			z4 = zGen.randomChump();
	delete z4;
	return 0;
}
