#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

class Span {
private:
    unsigned int        _n;
    std::vector<int>    _numbers;

public:
    Span();
    Span(unsigned int n);
    Span(Span const &src);
    Span &operator=(Span const &src);
    ~Span();

    void addNumber(int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    class NoSpanException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class FullSpanException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};