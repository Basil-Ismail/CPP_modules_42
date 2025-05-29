#include <ScalarConverter.hpp>
#include <utils.hpp>
void processChar(std::string input)
{
    // TODO:
    //  I should check if the input is in quotes or not, else I should check for ascci code.
    std::cout << "char : ";
    int value;
    try {
        if (input.length() == 1)
            value = static_cast<int>(input[0]);
        else
            value = OFAtoi(input);
        if (value < 127 && value >= 0) {
            std::string s(1, (char)value);
            std::cout << (std::isprint(value) ? s : "Not displayable") << std::endl;
            return;
        } else
            throw ScalerConverter::ImpossibleType();
    } catch (const std::exception& e) {

        std::cout << e.what() << std::endl;
    }
}