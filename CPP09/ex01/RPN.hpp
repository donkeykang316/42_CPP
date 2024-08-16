#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>
#include <sstream>

class RPN {
private:
    std::stack<int> _stack;

public:
    RPN();
    RPN(const RPN& src);
    RPN& operator=(const RPN& src);
    ~RPN();

    void loadLine(const std::string& input);
    void rpnRun();

    class RPNException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};