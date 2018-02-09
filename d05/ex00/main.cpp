/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eren_ozdek <eren_ozdek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 21:02:26 by eren_ozdek        #+#    #+#             */
/*   Updated: 2017/10/09 22:51:01 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {

    try {
        Bureaucrat state1 = Bureaucrat("Claude", 150);
        std::cout << state1;
    } catch (Bureaucrat::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        Bureaucrat state2 = Bureaucrat("Jean", 1);
        std::cout << state2;
    } catch(Bureaucrat::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat state3 = Bureaucrat("Marine", -1);
        std::cout << state3;
    } catch (Bureaucrat::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        Bureaucrat state4 = Bureaucrat("Martine", 151);
        std::cout << state4;
    } catch (Bureaucrat::GradeTooHighException e) {
       std::cout << e.what() << std::endl; 
    }
    
    return (0);
}
