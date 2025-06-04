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
    if (input.find_first_not_of("+-0123456789") != std::string::npos)
        return false;

    /*
     The logic here simply means, if there is a sign,
     and the first sign != the last sign "Means there is more than one"
     or if it find method returns anything other than 0 "Which indicates it's not the first char"
     return false it's not an Integer
    */
    if (input.find('-') != std::string::npos && (input.find('-') != input.rfind('-') || input.find('-')))
        return false;
    if (input.find('+') != std::string::npos && (input.find('+') != input.rfind('+') || input.find('+')))
        return false;

    // TODO:
    // Accomdate for Hexa and Oct: A question to ask before working on it

    return true;
}

int detectInput(std::string input)
{
    if (checkChar(input))
        return CHAR;
    if (checkInt(input))
        return INT;
}
