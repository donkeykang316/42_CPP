#include "RPN.hpp"

RPN::RPN() : _stack() {}

RPN::RPN(const RPN& src) {
    *this = src;
}

RPN& RPN::operator=(const RPN& src) {
    if (this != &src) {
        _stack = src._stack;
    }
    return *this;
}

RPN::~RPN() {}

void RPN::loadLine(const std::string& input) {
    std::stringstream ss(input);
    std::string token;
    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (_stack.size() < 2) {
                throw RPNException();
            }
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            if (token == "+") {
                _stack.push((b + a));
            } else if (token == "-") {
                _stack.push((b - a));
            } else if (token == "*") {
                _stack.push((b * a));
            } else if (token == "/") {
                _stack.push((b / a));
            }
        } else {
            if (token.size() > 1) {
                throw RPNException();
            }
            if (isdigit(token[0]) == 0) {
                throw RPNException();
            }
            int x = std::strtol(token.c_str(), NULL, 10);
            if (x > 9) {
                throw RPNException();
            }
            _stack.push(x);
        }
    }
}

void RPN::rpnRun() {
    std::cout << _stack.top() << std::endl;
}

const char* RPN::RPNException::what() const throw() {
    return "Error";
}