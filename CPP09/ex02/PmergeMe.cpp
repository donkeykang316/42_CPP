#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _element(0) {}

PmergeMe::PmergeMe(const PmergeMe& src) {
    *this = src;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& src) {
    if (this != &src) {
        _element = src._element;
        _deque = src._deque;
        _vector = src._vector;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

//vector
void PmergeMe::readVector(const std::string& input) {
    int value = std::strtoll(input.c_str(), NULL, 10);
    if (value < 0) {
        throw Error();
    }
    _vector.push_back(value);
}

void PmergeMe::sortMergeVector() {
    std::cout << "Before:\t";
    for(std::vector<int>::const_iterator it = _vector.begin(); it != _vector.end(); ++it) {
        ++_element;
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //store the start time
    std::clock_t start = std::clock();

    std::sort(_vector.begin(), _vector.end());

    //store the end time
    std::clock_t end = std::clock();

    std::cout << "After:\t";
    for (std::vector<int>::const_iterator it = _vector.begin(); it != _vector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of:\t" << _element << " elements with std::vector<int> :\t" << 1000.0 * (end - start) / CLOCKS_PER_SEC << " us" << std::endl;
}

//deque
void PmergeMe::readDeque(const std::string& input) {
    int value = std::strtoll(input.c_str(), NULL, 10);
    if (value < 0) {
        throw Error();
    }
    _deque.push_back(value);
}

void PmergeMe::sortMergeDeque() {
    std::clock_t start = std::clock();
    std::sort(_deque.begin(), _deque.end());
    std::clock_t end = std::clock();
    /*std::cout << "After:\t";
    for (std::deque<int>::const_iterator it = _deque.begin(); it != _deque.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;*/
    std::cout << "Time to process a range of:\t" << _element << " elements with std::deque<int> :\t" << 1000.0 * (end - start) / CLOCKS_PER_SEC << " us" << std::endl;

}

const char* PmergeMe::Error::what() const throw() {
    return "Error";
}