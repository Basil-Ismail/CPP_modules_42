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
        long value = OFAtoi(input);
        std::cout << value << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}