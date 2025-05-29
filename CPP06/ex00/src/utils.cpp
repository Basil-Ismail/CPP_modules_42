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

bool Myisinff(float value)
{
    return (value == std::numeric_limits<float>::infinity() || value == -std::numeric_limits<float>::infinity());
}
bool Myisinf(double value)
{
    return (value == std::numeric_limits<double>::infinity() || value == -std::numeric_limits<double>::infinity());
}

bool Myisnan(float value)
{
    return value != value;
}

bool myIsPrint(char c)
{
    return (c >= 32 && c <= 126);
}
int OFAtoi(std::string input) // OverFlow atoi
{
    char* endptr;
    long value;
    value = std::strtol(input.c_str(), &endptr, 10);
    if (endptr == input.c_str() || *endptr != '\0')
        throw ScalerConverter::ImpossibleType();
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

bool checkForPL(std::string input, int mode)
{
    float value = atof(input.c_str());

    if (mode) {
        if (Myisinff(value) || Myisnan(value)) {
            std::cout << value;
            return true;
        }
    } else {
        if (Myisinf(value) || Myisnan(value)) {
            std::cout << value;
            return true;
        }
    }
    return false;
}