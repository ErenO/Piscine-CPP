/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 09:46:21 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 13:05:18 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    std::cout << "--------------------" << std::endl;
    std::cout << "name : " << robert.getName() << " , title: " << robert.getTitle() << std::endl;
    std::cout << "name : " << jim.getName() << std::endl;
    std::cout << "name : " << joe.getName() << std::endl;
    robert.intro();
    jim.intro();
    joe.intro();
    std::cout << "Test :    Victim -> Peaon  getPolymorphed and delete "  << std::endl;
    Victim* v = new Peon("p");
    v->getPolymorphed();
    delete v;
    std::cout  << std::endl;
    std::cout << "------------" << std::endl;
    joe.getPolymorphed();
    jim.getPolymorphed();
    std::cout << "--------------------" << std::endl;

    return 0;
}
