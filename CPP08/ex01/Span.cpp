#include "Span.hpp"

Span::Span() : _n(0), _numbers() {
}

Span::Span(unsigned int n) : _n(n) {
    _numbers.reserve(n);
}

Span::Span(Span const &src) {
    *this = src;
}

Span &Span::operator=(Span const &src) {
    if (this != &src) {
        _n = src._n;
    }
    return *this;
}

Span::~Span() {
}

void Span::addNumber(int n) {
    _numbers.push_back(n);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (_numbers.size() + std::distance(begin, end) > _n) {
        throw Span::FullSpanException();
        return;
    }
    _numbers.insert(_numbers.end(), begin, end);
}

unsigned int Span::shortestSpan() {
    if (_numbers.size() < 2) {
        throw Span::NoSpanException();
    }
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    unsigned int shortest = tmp[1] - tmp[0];
    for (unsigned int i = 0; i < tmp.size() - 1; i++) {
        unsigned int diff = tmp[i + 1] - tmp[i];
        if (diff < shortest) {
            shortest = diff;
        }
    }
    return shortest;
}

unsigned int Span::longestSpan() {
    if (_numbers.size() < 2) {
        throw Span::NoSpanException();
    }
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

const char *Span::NoSpanException::what() const throw() {
    return "No span to find";
}

const char *Span::FullSpanException::what() const throw() {
    return "Span is full";
}