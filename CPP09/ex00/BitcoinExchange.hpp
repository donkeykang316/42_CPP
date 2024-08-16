#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <sstream>

class BitcoinExchange {
private:
    const std::string               _srcFile;
    const std::string               _inputFile;
    std::map<std::string, float>    _srcStack;
    std::map<std::string, float>    _inputStack;

public:
    BitcoinExchange();
    BitcoinExchange(const std::string &inputFile);
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &src);

    void exchangedData();
    void checkDate(const std::string &date);
    float checkValue(std::string keyValue);
    void printData(const std::string &date, float value);

    class FileOpenError : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class UnsignedIntError : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class LargeNumberError : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class BadInputError : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class EmptyValueError : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};
