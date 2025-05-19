#include <utils.hpp>

void processChar(std::string input)
{
    std::cout << "char : ";
    if (input.length() != 1)
        std::cout << "impossible";
    else if (std::isprint(input[0]))
        std::cout << input[0];
    else
        std::cout << "Non displayable";
    std::cout << std::endl;
}