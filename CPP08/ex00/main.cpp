#include "easyfind.hpp"

int main() {
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);

    try {
        easyfind(vec, 5);
        easyfind(vec, 11);
    } catch (std::exception &e) {
        std::cout << "Value not found" << std::endl;
    }
    return 0;
}