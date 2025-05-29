#include <ScalarConverter.hpp>
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
    std::cout << "char : ";
    int value;
    try {
        value = charOrAscci(input) == -1 ? OFAtoi(input) : charOrAscci(input);
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