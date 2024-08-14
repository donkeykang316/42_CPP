#include "Classes.hpp"

Base::~Base() {}

Base * generate(void) {
    srand(time(NULL));
    int random = rand() % 3;
    if (random == 0) {
        std::cout << "Generated A" << std::endl;
        return new A;
    } else if (random == 1) {
        std::cout << "Generated B" << std::endl;
        return new B;
    } else {
        std::cout << "Generated C" << std::endl;
        return new C;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "Identified A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "Identified B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "Identified C" << std::endl;
    } else {
        std::cout << "Identified unknown" << std::endl;
    }
}

void identify(Base& p) {
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "Identified A" << std::endl;
        return;
    }
    catch (std::exception &e) {}
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "Identified B" << std::endl;
        return;
    }
    catch (std::exception &e) {}
    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "Identified C" << std::endl;
        return;
    }
    catch (std::exception &e) {}
}