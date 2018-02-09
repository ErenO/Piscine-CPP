#include <iostream>

template<typename T> 
void print_param(T elem) {
    std::cout << elem << std::endl;
}

template<typename T> 
void iter(T *ptr, int l, void (*f)(T const &)) {
    int i;

    i = 0;
    while (i < l) {
        f(ptr[i]);
        i++;
    }
}
