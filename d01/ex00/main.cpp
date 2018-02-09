/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 08:54:37 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 09:17:59 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void) {
    Pony * Heap = new Pony("France", "Blue");
    delete Heap;
}

void ponyOnTheStack(void) {
    Pony Stack = Pony("Belgium", "Red");
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}
