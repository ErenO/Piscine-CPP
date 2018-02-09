/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 21:02:26 by eren_ozdek        #+#    #+#             */
/*   Updated: 2017/10/10 23:05:45 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat state("Hello", 180);
    }
    catch (std::exception &e)
    {
        std::cout << "catch" << std::endl;
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat state("Hello", -20);
    }
    catch (std::exception &e)
    {
        std::cout << "catch" << std::endl;
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form state2("toto", 1, 1);
        std::cout << state2 << std::endl;
        Form state3("tata", -1, 1);
        std::cout << state3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form state4("Turlututu", 1, -50);
        std::cout << state4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form state4("Turlututu", 300, 4);
        std::cout << state4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form state4("Turlututu", 1, 300);
        std::cout << state4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat coucou("Kitty", 40);
    Form form1("account", 10, 3);
    Form form2("account2", 40, 3);
    std::cout << coucou << std::endl;
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;

    coucou.signForm(form1);
    coucou.signForm(form2);
    Form form3("account3", 10, 5);
    Form form4("account4", 50, 5);
    std::cout << form3 << std::endl;
    std::cout << form4 << std::endl;
    try
    {
        form3.beSigned(coucou);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        form4.beSigned(coucou);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Form form5("account5", 50, 5);
    std::cout << form5 << std::endl;
    form5.beSigned(coucou);

    return (0);
}