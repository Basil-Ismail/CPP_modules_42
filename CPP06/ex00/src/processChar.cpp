#include <ScalarConverter.hpp>
#include <iomanip>
#include <utils.hpp>

int charOrAscci(std::string input)
{
    std::string processedInput = trim(input);

    if (processedInput.length() != 3)
        return -1;
    if (processedInput[0] == processedInput[2] && processedInput[0] == '\'')
        return (static_cast<int>(processedInput[1]));
    return -1;
}

void processChar(std::string input)
{
    char ch = input[1];
    std::cout << "char: " << '\'';
    if (std::isprint(ch))
        std::cout << ch;
    else
        std::cout << "Non displayable";
    std::cout << '\'' << std::endl;

    std::cout << "int: " << static_cast<int>(ch) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(ch) << 'f' << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(ch) << std::endl;
}