#include <ScalarConverter.hpp>
#include <utils.hpp>
std::string trim(std::string input)
{
    if (input.empty())
        return (input);

    size_t start = input.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos)
        return "";
    size_t end = input.find_last_not_of(" \t\n\r\f\v");

    return (input.substr(start, end - start + 1));
}

int OFAtoi(std::string input) // OverFlow atoi
{
    long value = atol(input.c_str());

    if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        throw ScalerConverter::ImpossibleType();
    return (value);
}

size_t numericLength(int num)
{
    size_t length = 0;
    if (num <= 0)
        length++;
    while (num) {
        num /= 10;
        length++;
    }
    return length;
}

bool checkForPL(std::string input)
{
    float value = atof(input.c_str());

    if (std::isinf(value) || std::isnan(value)) {
        std::cout << value;
        return true;
    }
    return false;
}