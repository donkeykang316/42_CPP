#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _srcFile("data.csv"), _inputFile("default"), _srcStack(), _inputStack() {}

BitcoinExchange::BitcoinExchange(const std::string &inputFile) : _srcFile("data.csv"), _inputFile(inputFile), _srcStack(), _inputStack() {
    std::ifstream data;

    data.open(_srcFile.c_str());
    if (!data.is_open()) {
        throw FileOpenError();
    }
    std::string line;
    std::getline(data, line);
    while (std::getline(data, line)) {
        std::string key = line.substr(0, line.find(','));
        float value = std::strtof(line.substr(line.find(',') + 1).c_str(), NULL);
        _srcStack[key] = value;
    }
    data.close();
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src) {
    if (this != &src) {
        _srcStack = src._srcStack;
        _inputStack = src._inputStack;
    }
    return *this;
}

void BitcoinExchange::exchangedData() {
    std::ifstream data;

    data.open(_inputFile.c_str());
    if (!data.is_open()) {
        throw FileOpenError();
    }
    std::string line;
    std::getline(data, line);
    while (std::getline(data, line)) {
        std::string key = line.substr(0, line.find('|'));
        key.erase(std::remove(key.begin(), key.end(), ' '), key.end());
        std::string keyValue = line.substr(line.find('|') + 1).c_str();
        keyValue.erase(std::remove(keyValue.begin(), keyValue.end(), ' '), keyValue.end());
        try {
            checkDate(key);
            printData(key, checkValue(keyValue));
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
    data.close();
}

void BitcoinExchange::checkDate(const std::string &date) {
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
        throw BadInputError();
    }
    for (int i = 0; i < 10; i++) {
        if (i == 4 || i == 7) {
            continue;
        }
        if (date[i] < '0' || date[i] > '9') {
            throw BadInputError();
        }
    }
    int year = std::strtol(date.substr(0, 4).c_str(), NULL, 10);
    int month = std::strtol(date.substr(5, 6).c_str(), NULL, 10);
    int day = std::strtol(date.substr(8, 9).c_str(), NULL, 10);
    if (year > 2022 || year < 2009 || month < 1 || month > 12 || day < 1 || day > 31) {
        throw BadInputError();
    }
    if (month == 2 && day > 29) {
        throw BadInputError();
    }
}

float BitcoinExchange::checkValue(std::string keyValue) {
    if (keyValue.empty()) {
        throw EmptyValueError();
    }
    float value = std::strtof(keyValue.c_str(), NULL);
    if (value < 0) {
        throw UnsignedIntError();
    }
    if (value > 1000) {
        throw LargeNumberError();
    }
    return value;
}

void BitcoinExchange::printData(const std::string &date, float value) {
    std::map<std::string, float>::iterator it = _srcStack.find(date);
    if (it == _srcStack.end()) {
        it =_srcStack.lower_bound(date);
    }
    float rate = it->second * value;
    std::cout << date << " => " << value << " " << rate << std::endl;
}

const char *BitcoinExchange::FileOpenError::what() const throw() {
    return "Error: could not open file.";
}

const char *BitcoinExchange::UnsignedIntError::what() const throw() {
    return "Error: not a positive number.";
}

const char *BitcoinExchange::LargeNumberError::what() const throw() {
    return "Error: too large a number.";
}

const char *BitcoinExchange::BadInputError::what() const throw() {
    return "Error: bad input.";
}

const char *BitcoinExchange::EmptyValueError::what() const throw() {
    return "Error: empty value.";
}