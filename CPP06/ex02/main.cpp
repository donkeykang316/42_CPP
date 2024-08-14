#include "Classes.hpp"

int main() {
    //test 1
    Base* basePtr1 = generate();
    identify(basePtr1);  // Expected output: "A" or "B" or "C" depending on what generate() returned.
    delete basePtr1;
    std::cout << std::endl;

    //test 2
    Base* basePtr2 = generate();
    identify(*basePtr2);  // Expected output: "A" or "B" or "C" depending on what generate() returned.
    delete basePtr2;
    std::cout << std::endl;

    //test 3
    for (int i = 0; i < 5; ++i) {
    Base* basePtr3 = generate();
    identify(basePtr3);    // Pointer identification
    identify(*basePtr3);   // Reference identification
    delete basePtr3;
    }
    std::cout << std::endl;

    //test 4
    A a;
    B b;
    C c;

    identify(&a);  // Expected output: "A"
    identify(&b);  // Expected output: "B"
    identify(&c);  // Expected output: "C"

    identify(a);  // Expected output: "A"
    identify(b);  // Expected output: "B"
    identify(c);  // Expected output: "C"

    return 0;
}