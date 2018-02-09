/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:38:32 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 21:14:28 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include <string>

void print_space(std::string str) {
    int size;

    size = 10 - str.size();
    if (size > 0) {
        std::cout << std::string(size, ' ');
        std::cout << str;
    } else {
        std::cout << str.substr(0, 9) << ".";
    }
}

void print_all(PhoneBook instance[8], int limit)
{
    int i;

    i = 0;
    while (i < limit) {
        print_space(std::to_string(i));
        std::cout << "|";
        print_space(instance[i].getFirstName());
        std::cout << "|";
        print_space(instance[i].getLastName());
        std::cout << "|";
        print_space(instance[i].getNickName());
        std::cout << std::endl;
        i++;
    }
}

int main() {
    PhoneBook instance[8];
    int i = 0;
    int input = 0;

    for (std::string line; std::getline(std::cin, line);) {
        if (line.compare("ADD") == 0)
        {
            if (i < 8) {
                instance[i].info();
                i++;
            } else if (i >= 8) {
                std::cout << "Too many contacts. Can't add more." << std::endl;
            } else {
                std::cout << "Invalid input" << std::endl;
            }
        } else if (line.compare("SEARCH") == 0) {
            print_all(instance, i);
            std::cout << "Index of the desired entry: ";
            std::getline(std::cin, line);
            try {
              input = std::stoi(line);
              if ((input < 8) && input >= 0) {
                  instance[input].printall();
              }
            }
            catch(std::invalid_argument& e){
                std::cout << "Wrong input, please use only numbers" << std::endl;
            }
        } else if (line.compare("EXIT") == 0) {
            exit (EXIT_FAILURE);
        }
    }
    return (0);
}
