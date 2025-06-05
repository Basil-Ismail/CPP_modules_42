#include <ScalarConverter.hpp>

u_int8_t ScalerConverter::_types = -1;

ScalerConverter::ScalerConverter()
{
}

ScalerConverter::ScalerConverter(const ScalerConverter& obj)
{
    (void)obj;
}

ScalerConverter& ScalerConverter::operator=(const ScalerConverter& obj)
{
    (void)obj;
    return *this;
}

ScalerConverter::~ScalerConverter()
{
}

const char* ScalerConverter::ImpossibleType::what() const throw()
{
    return "impossible";
}

void ScalerConverter::convert(std::string input)
{
    if (input.empty())
        std::cout << "Input is empty " << std::endl;
    std::string processedInput = trim(input);
    int type = detectInput(processedInput);

    switch (type) {
    case CHAR:
        processChar(processedInput);
        break;
    case INT:
        processInt(processedInput);
        break;
    case FLOAT:
        processFloatAndDouble(processedInput, 1);
    case DOUBLE:
        processFloatAndDouble(processedInput, 0);
    default:
        std::cout << "No conversion is possible" << std::endl;
        return;
        break;
    }
}