/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 18:25:57 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 19:59:07 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
    int pos;
    std::string str;
    std::string line;
    std::string s1;
    std::string s2;
    std::string getLine;
    std::string file;
    std::ifstream ifs;
    std::ofstream ofs;

    pos = 0;
    if (argc == 4) {
        ifs.open (argv[1]);
        s1 = std::string(argv[2]);
        s2 = std::string(argv[3]);
        if (ifs.is_open()) {
            ofs.open(std::string(argv[1]) + ".replace");
            if (ofs.is_open()) {
                if (s2.find(s1)) {
                    while(getline(ifs, str)){
                        line = str;
                        while(line.find(s1) != std::string::npos){
                            pos = line.find(s1);
                            line = line.replace(pos, s1.size(), s2);
                        }
                        ofs << line << std::endl;
                    }
                } else {
                    std::cout << "s2 is in s1, can't solve" << std::endl;
                }
            } else {
                std::cout << "Can't open the file." << std::endl;
            }
        } else {
            std::cout << "Can't open the file." << std::endl;
        }
    } else {
        std::cout << "Wrong numbers of arguments." << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}
