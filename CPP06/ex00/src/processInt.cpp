#include <ScalarConverter.hpp>
#include <utils.hpp>

void processInt(std::string input)
{
    int num = atoi(input.c_str());

    if (num < 127 || num >= 0) {
        std::cout << "char: " << '\'';
        if (std::isprint(static_cast<char>(num)))
            std::cout << static_cast<char>(num);
        else
            std::cout << "Non displayable";
        std::cout << '\'' << std::endl;
    } else
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << num << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << 'f' << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
}