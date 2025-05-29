#include <ScalarConverter.hpp>
#include <utils.hpp>

void processInt(std::string input)
{
    std::string processedInput = trim(input);
    std::cout << "int : ";

    try {
        if (input.length() == 1) {
            std::cout << static_cast<int>(input[0]) << std::endl;
            return;
        }

        char* endptr;
        long value;

        value = std::strtol(input.c_str(), &endptr, 10);
        if (endptr == input.c_str())
            throw ScalerConverter::ImpossibleType();
        OFAtoi(input);

        std::cout << value << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}