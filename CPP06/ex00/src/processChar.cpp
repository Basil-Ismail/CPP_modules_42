#include <ScalarConverter.hpp>
#include <utils.hpp>
void processChar(std::string input)
{
    std::cout << "char : ";
    try {

        if (input.length() != 1)
            throw ScalerConverter::ImpossibleType();
        else if (std::isprint(input[0]))
            std::cout
                << input[0];
        else
            std::cout << "Non displayable";
        std::cout << std::endl;
    } catch (const std::exception& e) {

        std::cout << e.what() << std::endl;
    }
}