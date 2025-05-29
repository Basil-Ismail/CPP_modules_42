#include <ScalarConverter.hpp>
#include <utils.hpp>

void processFloatAndDouble(std::string input, int mode)
// The idea of mode is just to stay DRY.
// mode 1 for float, 0 for double
{
    if (mode)
        std::cout << "float : ";
    else
        std::cout << "double : ";

    if (checkForPL(input, mode)) {
        std::cout << (mode ? "f" : "") << std::endl;
        return;
    }
    try {
        char* endptr;

        float value = std::strtof(input.c_str(), &endptr);
        if (endptr == input.c_str() || (*endptr != '\0' && !(*endptr == 'f' && *(endptr + 1) == '\0')))
            throw ScalerConverter::ImpossibleType();
        std::cout << value;
        if (value == static_cast<int>(value))
            std::cout << ".0";
        std::cout << (mode ? "f" : "") << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}