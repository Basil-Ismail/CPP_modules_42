#include <ScalarConverter.hpp>
#include <utils.hpp>

bool checkChar(std::string input)
{
    if (input.length() != 3 || input[0] != '\'' || input[2] != '\'')
        return false;
    return true;
}

bool checkInt(std::string input)
{
    if (input.find_first_not_of("+-x0123456789") != std::string::npos)
        return false;

    if (input.find('-') != std::string::npos && (input.find('-') != input.rfind('-') || input.find('-')))
        return false;
    if (input.find('+') != std::string::npos && (input.find('+') != input.rfind('+') || input.find('+')))
        return false;
    if (input.find('x') != std::string::npos && (input.find('x') != input.rfind('x') || input.find('x') != 1))
        return false;
    if (input.length() == 1 && !std::isdigit(input[0]))
        return false;
    char* endptr;
    long value = strtol(input.c_str(), &endptr, 0);
    if (*endptr != '\0')
        return false;
    if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        return false;
    return true;
}

// bool checkFP(std::string input)
// {
// }

// bool checkDBL(std::string input)
// {
// }
int detectInput(std::string input)
{
    if (checkChar(input))
        return CHAR;
    if (checkInt(input))
        return INT;
    // if (checkFP(input))
    //     return FLOAT;
    // if (checkDBL(input))
    //     return DOUBLE;
    return -1;
}
