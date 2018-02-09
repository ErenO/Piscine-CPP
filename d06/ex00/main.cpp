
#include <iostream>
#include <ctime>

int main(int argc, char *argv[]) {
    int i;

    i = 0;
    if (argc > 1) {
        std::cout << "Char: " << (char)atof(argv[1]) << std::endl;
        std::cout << "Int: " << (int)atof(argv[1]) <<std::endl;
        std::cout << "Float: " << atof(argv[1]) <<std::endl;
        std::cout << "Double: " << *reinterpret_cast<double*>(argv[1]) << std::endl;
    }
    return (0);
}