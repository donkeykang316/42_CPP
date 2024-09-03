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
    void vectorMergeSort();
    void vecMergeSort(std::vector<int>& vector, std::vector<int>& temp, int left, int right);
    void vecMerge(std::vector<int>& vector, std::vector<int>& temp, int left, int right, int rightEnd);
    void outputVector();

    //deque
    void readDeque(const std::string& input);
    void dequeMergeSort();
    void deqMergeSort(std::deque<int>& deque, std::deque<int>& temp, int left, int right);
    void deqMerge(std::deque<int>& deque, std::deque<int>& temp, int left, int right, int rightEnd);
    void outputDeque();

    class Error : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};