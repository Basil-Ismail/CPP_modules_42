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

    std::cout << type << std::endl;
    // processChar(input);
    // processInt(input);
    // processFloatAndDouble(input, 1);
    // processFloatAndDouble(input, 0);
}