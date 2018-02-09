/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:01:10 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 14:15:06 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string string= "HI THIS IS BRAIN";
    std::string *ptr = &string;
    std::string &ref = string;
    std::cout << "ptr " << *ptr << std::endl;
    std::cout << "ref " << ref << std::endl;

    return (0);
}
