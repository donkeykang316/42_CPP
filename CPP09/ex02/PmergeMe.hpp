#include <iostream>
#include <fstream>
#include <deque>
#include <vector>
#include <algorithm>
#include <ctime>

class PmergeMe {
private:
    std::deque<int>     _deque;
    std::vector<int>    _vector;
    int                 _element;

public:
    PmergeMe();
    PmergeMe(const PmergeMe& src);
    PmergeMe& operator=(const PmergeMe& src);
    ~PmergeMe();

    //vector
    void readVector(const std::string& input);
    void sortMergeVector();

    //deque
    void readDeque(const std::string& input);
    void sortMergeDeque();

    class Error : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};