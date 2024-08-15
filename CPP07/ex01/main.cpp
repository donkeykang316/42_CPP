#include "iter.hpp"

void print_int(int const &i) {
    std::cout << i << std::endl;
}

void print_string(std::string const &s) {
    std::cout << s << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    iter(intArray, 5, print_int);
    std::cout << std::endl;
    iter(stringArray, 5, print_string);
    return 0;
}