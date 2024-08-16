#include "RPN.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <RPN expression>" << std::endl;
        return 1;
    }
    RPN rpn;
    try {
        rpn.loadLine(argv[1]);
        rpn.rpnRun();
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}