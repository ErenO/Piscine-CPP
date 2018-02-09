/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eren_ozdek <eren_ozdek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 13:32:54 by eren_ozdek        #+#    #+#             */
/*   Updated: 2017/10/11 13:49:54 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate( void ) {
    int random = (rand() % 3);

    if (random == 0) {
        return (new A());
    } else if (random == 1) {
        return (new B());
    } else if (random == 2) {
        return (new C());
    } else {
        return (NULL);
    }
}

void identify_from_pointer( Base *p ) {
    if (dynamic_cast<A *>(p) != NULL) {
        std::cout << "Type : A" << std::endl;
    } else if (dynamic_cast<B *>(p) != NULL) {
        std::cout << "Type : B" << std::endl;
    } else if (dynamic_cast<C *>(p) != NULL) {
        std::cout << "Type : C" << std::endl;
    }
}

void identify_from_reference(Base & p)
{
    if (dynamic_cast<A *>(&p) != NULL) {
        std::cout << "Type : A" << std::endl;
    }
    else if (dynamic_cast<B *>(&p) != NULL) {
        std::cout << "Type : B" << std::endl;
    } else if (dynamic_cast<C *>(&p) != NULL) {
        std::cout << "Type : C" << std::endl;
    }
}

int main() {
    Base *gen;
    std::srand(std::time(NULL) + std::clock());

    gen = generate();
    identify_from_pointer(gen);
    identify_from_reference(*gen);
    delete(gen);
    return (0);
}