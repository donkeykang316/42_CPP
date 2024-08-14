#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <iomanip>
#include <cstring>


class ScalarConverter {
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ~ScalarConverter();
    ScalarConverter &operator=(const ScalarConverter &src);

    static int inputCheck(const std::string &str);

public:
    static void convert(const std::string &str);

};