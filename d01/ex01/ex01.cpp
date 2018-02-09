/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:32:41 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 09:34:56 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() {
    std::string*        panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}

int main() {
    memoryLeak();
    return (0);
}
