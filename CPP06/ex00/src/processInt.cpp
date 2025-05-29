#include <ScalarConverter.hpp>
#include <utils.hpp>
void processInt(std::string input)
{
    std::string processedInput = trim(input);
    std::cout << "int : ";
    try {
        if (!std::isdigit(processedInput[0]) && processedInput[0] != '-') // I'll not account for "+" as it's not really part of the literals unless you're a psycopath
            throw ScalerConverter::ImpossibleType();
        for (size_t i = 1; i < processedInput.length(); i++)
            if (!std::isdigit(processedInput[i]))
                throw ScalerConverter::ImpossibleType();
        int value = OFAtoi(processedInput);
        if (numericLength(value) != processedInput.length())
            throw ScalerConverter::ImpossibleType();
        std::cout << numericLength(value) << "  " << OFAtoi(input) << std::endl;

    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}