#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
    *this = src;
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {
    (void)src;
    return *this;
}

int ScalarConverter::inputCheck(const std::string &str) {
    char *endptr;

    // Check if the string is empty
    if (str.empty())
        return 4;
    
    // Check if the string is a char
    if (str.size() == 1 && !std::isdigit(str[0]))
        return 0;
    
    // Check if the string is a int
    long long value = std::strtoll(str.c_str(), &endptr, 10);
    if (*endptr == '\0') {
            if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min()) {
                return 4;
            }
            return 1;
    }

    // Check if the string is a float
    std::strtof(str.c_str(), &endptr);
    if (strcmp(endptr, "f") == 0) {
        return 2;
    }

    // Check if the string is a double
    std::strtod(str.c_str(), &endptr);
    if (*endptr == '\0') {
        return 3;
    }

    return 4;
}

void ScalarConverter::convert(const std::string &str) {
    char charValue = 0;
    long int intValue = 0;
    float floatValue = 0;
    double doubleValue = 0;
    bool is_valid_char = true;
    bool is_valid_int = true;

    switch (inputCheck(str)) {
        case 0:
            charValue = str[0];
            intValue = static_cast<int>(charValue);
            floatValue = static_cast<float>(charValue);
            doubleValue = static_cast<double>(charValue);
            break;
        case 1:
            intValue = std::strtol(str.c_str(), NULL, 10);
            charValue = static_cast<char>(intValue);
            floatValue = static_cast<float>(intValue);
            doubleValue = static_cast<double>(intValue);
            break;
        case 2:
            floatValue = std::strtof(str.c_str(), NULL);
            charValue = static_cast<char>(floatValue);
            intValue = static_cast<int>(floatValue);
            doubleValue = static_cast<double>(floatValue);
            break;
        case 3:
            doubleValue = std::strtod(str.c_str(), NULL);
            charValue = static_cast<char>(doubleValue);
            intValue = static_cast<int>(doubleValue);
            floatValue = static_cast<float>(doubleValue);
            break;
        case 4:
            floatValue = std::numeric_limits<float>::quiet_NaN();
			doubleValue = std::numeric_limits<double>::quiet_NaN();
			is_valid_int = false;
        }

    std::cout << "char: ";
    if (!is_valid_char || intValue < 0 || intValue > 127)
        std::cout << "impossible" << std::endl;
    else if (intValue < 32 || intValue > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << charValue << "'" << std::endl;
    if (is_valid_int && doubleValue > std::numeric_limits<int>::min() && doubleValue < std::numeric_limits<int>::max()) {
        std::cout << "int: " << intValue << std::endl;
    } else {
        std::cout << "int: impossible" << std::endl;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
}
