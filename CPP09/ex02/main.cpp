#include "PmergeMe.hpp"

int main(int ac, char** av) {
    if (ac < 3) {
        std::cerr << "Usage: " << av[0] << "int int ..." << std::endl;
        return 1;
    }
    PmergeMe pm;

    int i = 1;
    try {
        while (av[i]) {
            pm.readVector(av[i]);
            pm.readDeque(av[i]);
            i++;
        }
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    //vector
    pm.outputVector();

    //deque
    pm.outputDeque();

    return 0;

}