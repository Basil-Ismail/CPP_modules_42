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