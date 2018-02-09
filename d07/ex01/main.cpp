#include "Iter.cpp"
#include <iostream>

int main() {
    std::string arr[] = {"David", "Alex", "Jimi", "Eren"};
    int nb[] = {1, 2, 3, 4, 5, 6, 7, 8};

    ::iter(arr, sizeof(arr) / sizeof(arr[0]), ::print_param);
    ::iter(nb, sizeof(nb) / sizeof(nb[0]), ::print_param);
    return (0);
}