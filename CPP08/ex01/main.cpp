#include "Span.hpp"

int main()
{
    //subject test
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    // test with high random numbers
	Span sp2 = Span(30000);
	std::vector<int> vec;
    //sp2.addNumber(6);
    srand(time(NULL));
	for (int i = 0; i < 30000; i++){
		vec.push_back(rand());
    }
    try {
        sp2.addRange(vec.begin(), vec.end());
        std::cout << sp2.shortestSpan() << std::endl;
	    std::cout << sp2.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;

	// test with one random number between 0 and 9
	try {
		    Span splas = Span(1);
		    std::vector<int> vec;
		    for (int i = 0; i < 1; i++) {
			    vec.push_back(rand() % 10);
            }
		    splas.addRange(vec.begin(), vec.end());
		    std::cout << splas.shortestSpan() << std::endl;
		    std::cout << splas.longestSpan() << std::endl;
		} catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	std::cout << std::endl;
return 0;
}
