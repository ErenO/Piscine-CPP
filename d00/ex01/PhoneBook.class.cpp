/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:32:52 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 21:15:03 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
    // std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook( void ) {
    // std::cout << "Destructor called" << std::endl;
}

std::string PhoneBook::getFirstName() {
    return this->_first_name;
}

std::string PhoneBook::getLastName() {
    return this->_last_name;
}

std::string PhoneBook::getNickName() {
    return this->_nickname;
}

void PhoneBook::info() {
    std::cout << "Please, enter your first name: ";
    std::getline (std::cin,this->_first_name);
    std::cout << "Please, enter your last name: ";
    std::getline (std::cin,this->_last_name);
    std::cout << "Please, enter your nickname: ";
    std::getline (std::cin,this->_nickname);
    std::cout << "Please, enter your login: ";
    std::getline (std::cin,this->_login);
    std::cout << "Please, enter your postal address: ";
    std::getline (std::cin,this->_postal_address);
    std::cout << "Please, enter your email address: ";
    std::getline (std::cin,this->_email_address);
    std::cout << "Please, enter your phone number: ";
    std::getline (std::cin,this->_phone_number);
    std::cout << "Please, enter your birthday date: ";
    std::getline (std::cin,this->_birthday_date);
    std::cout << "Please, enter your favorite meal: ";
    std::getline (std::cin,this->_favorite_meal);
    std::cout << "Please, enter your underwear color: ";
    std::getline (std::cin,this->_underwear_color);
    std::cout << "Please, enter your darkest secret: ";
    std::getline (std::cin,this->_darkest_secret);
}

void PhoneBook::printall(void) {
    std::cout << "First name: "  << this->_first_name << std::endl;
    std::cout << "Last name: " << this->_last_name << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Login: " << this->_login << std::endl;
    std::cout << "Postal address: " << this->_postal_address << std::endl;
    std::cout << "Email address: " << this->_email_address << std::endl;
    std::cout << "Phone number: " << this->_phone_number << std::endl;
    std::cout << "Birthday date: " << this->_birthday_date << std::endl;
    std::cout << "Favorite meal: " << this->_favorite_meal << std::endl;
    std::cout << "Underwear color: " << this->_underwear_color << std::endl;
    std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}
