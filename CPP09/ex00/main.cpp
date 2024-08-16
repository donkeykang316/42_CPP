#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./ex00 [filename]" << std::endl;
        return 1;
    }
    BitcoinExchange exchange(argv[1]);
    try {
        exchange.exchangedData();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}