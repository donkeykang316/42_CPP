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

void PmergeMe::vectorMergeSort() {
    std::vector<int> temp(_vector.size());
    vecMergeSort(_vector, temp, 0, _vector.size() - 1);
}

void PmergeMe::vecMergeSort(std::vector<int>& vector, std::vector<int>& temp, int left, int right) {
    if (left < right) {
        int center = (left + right) / 2;
        
        vecMergeSort(vector, temp, left, center);
        vecMergeSort(vector, temp, center + 1, right);
        vecMerge(vector, temp, left, center + 1, right);
    }
}

void PmergeMe::vecMerge(std::vector<int>& vector, std::vector<int>& temp, int left, int right, int rightEnd) {
    int leftEnd = right - 1;
    int k = left;
    int num = rightEnd - left + 1;

    while (left <= leftEnd && right <= rightEnd) {
        if (vector[left] <= vector[right]) {
            temp[k++] = vector[left++];
        } else {
            temp[k++] = vector[right++];
        }
    }

    while (left <= leftEnd) {
        temp[k++] = vector[left++];
    }

    while (right <= rightEnd) {
        temp[k++] = vector[right++];
    }

    for (int i = 0; i < num; i++, rightEnd--) {
        vector[rightEnd] = temp[rightEnd];
    }
}

void PmergeMe::outputVector() {
    std::cout << "Before:\t";
    for(std::vector<int>::const_iterator it = _vector.begin(); it != _vector.end(); ++it) {
        ++_element;
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //store the start time
    std::clock_t start = std::clock();

    vectorMergeSort();

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

void PmergeMe::dequeMergeSort() {
    std::deque<int> temp(_deque.size());
    deqMergeSort(_deque, temp, 0, _deque.size() - 1);
}

void PmergeMe::deqMergeSort(std::deque<int>& deque, std::deque<int>& temp, int left, int right) {
    if (left < right) {
        int center = (left + right) / 2;
        
        deqMergeSort(deque, temp, left, center);
        deqMergeSort(deque, temp, center + 1, right);
        deqMerge(deque, temp, left, center + 1, right);
    }
}

void PmergeMe::deqMerge(std::deque<int>& deque, std::deque<int>& temp, int left, int right, int rightEnd) {
    int leftEnd = right - 1;
    int k = left;
    int num = rightEnd - left + 1;

    while (left <= leftEnd && right <= rightEnd) {
        if (deque[left] <= deque[right]) {
            temp[k++] = deque[left++];
        } else {
            temp[k++] = deque[right++];
        }
    }

    while (left <= leftEnd) {
        temp[k++] = deque[left++];
    }

    while (right <= rightEnd) {
        temp[k++] = deque[right++];
    }

    for (int i = 0; i < num; i++, rightEnd--) {
        deque[rightEnd] = temp[rightEnd];
    }
}

void PmergeMe::outputDeque() {
    std::clock_t start = std::clock();
    dequeMergeSort();
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