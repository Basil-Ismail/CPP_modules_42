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

bool checkFP(std::string input)
{
    if (input == "inff" || input == "+inff" || input == "-inff" || input == "nanf")
        return true;
    if (input.find_first_not_of("+-.0123456789f") != std::string::npos)
        return false;

    if (input.find('-') != std::string::npos && (input.find('-') != input.rfind('-') || input.find('-')))
        return false;
    if (input.find('+') != std::string::npos && (input.find('+') != input.rfind('+') || input.find('+')))
        return false;
    if (input.find(".") == std::string::npos || input.find('.') != input.rfind('.'))
        return false;
    if (input[input.length() - 1] != 'f')
        return false;

    size_t dotPos = input.find('.');
    if (dotPos == 0 || dotPos == input.length() - 1)
        return false;
    size_t start = (input[0] == '+' || input[0] == '-') ? 1 : 0;
    size_t end = input.length() - 1;

    bool hasDigitBeforeDot = false;
    bool hasDigitAfterDot = false;

    for (size_t i = start; i < dotPos; i++) {
        if (std::isdigit(input[i])) {
            hasDigitBeforeDot = true;
            break;
        }
    }
    for (size_t i = dotPos + 1; i < end; i++) {
        if (std::isdigit(input[i])) {
            hasDigitAfterDot = true;
            break;
        }
    }
    if (!hasDigitBeforeDot && !hasDigitAfterDot)
        return false;
    return true;
}

bool checkDBL(std::string input)
{
    if (input == "inf" || input == "+inf" || input == "-inf" || input == "nan")
        return true;
    if (input.find_first_not_of("+-.0123456789") != std::string::npos)
        return false;

    if (input.find('-') != std::string::npos && (input.find('-') != input.rfind('-') || input.find('-')))
        return false;
    if (input.find('+') != std::string::npos && (input.find('+') != input.rfind('+') || input.find('+')))
        return false;
    if (input.find(".") == std::string::npos || input.find('.') != input.rfind('.'))
        return false;

    size_t dotPos = input.find('.');
    if (dotPos == 0 || dotPos == input.length() - 1)
        return false;
    size_t start = (input[0] == '+' || input[0] == '-') ? 1 : 0;
    size_t end = input.length();

    bool hasDigitBeforeDot = false;
    bool hasDigitAfterDot = false;

    for (size_t i = start; i < dotPos; i++) {
        if (std::isdigit(input[i])) {
            hasDigitBeforeDot = true;
            break;
        }
    }
    for (size_t i = dotPos + 1; i < end; i++) {
        if (std::isdigit(input[i])) {
            hasDigitAfterDot = true;
            break;
        }
    }
    if (!hasDigitBeforeDot && !hasDigitAfterDot)
        return false;
    return true;
}
int detectInput(std::string input)
{
    if (checkChar(input))
        return CHAR;
    if (checkInt(input))
        return INT;
    if (checkFP(input))
        return FLOAT;
    if (checkDBL(input))
        return DOUBLE;
    return -1;
}
