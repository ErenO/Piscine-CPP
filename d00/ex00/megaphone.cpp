/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 09:16:52 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/02 10:21:37 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <cstdio>

int main(int argc, char *argv[]) {
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc > 1) {
        while (i < argc) {
            j = 0;
            while (argv[i][j] != '\0') {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}
