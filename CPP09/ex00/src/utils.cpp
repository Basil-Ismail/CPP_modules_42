#include <utils.hpp>

std::pair<std::string, std::string> splitString(std::string &input, char delim)
{
    size_t indx = input.find(delim);

    if (indx == std::string::npos)
        return std::make_pair("", "");
    std::string firstPart = input.substr(0, indx);
    std::string secPart = input.substr(indx + 1);

    return std::make_pair(firstPart, secPart);
}

std::string trim(std::string input)
{
    if (input.empty())
        return input;
    size_t start = input.find_first_not_of(" \t\r\n\f\v");
    if (start == std::string::npos)
        return "";
    size_t end = input.find_last_not_of(" \t\r\n\f\v");

    return input.substr(start, end - start + 1);
}