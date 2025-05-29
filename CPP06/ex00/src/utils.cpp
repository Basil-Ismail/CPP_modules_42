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

int OFAtoi(std::string input)
{
    long value = atol(input.c_str());

    if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        return -1;
    return (value);
}

size_t numericLength(int num)
{
    size_t length = 0;
    if (num < 0)
        length++;
    while (num) {
        num /= 10;
        length++;
    }

    return length;
}
