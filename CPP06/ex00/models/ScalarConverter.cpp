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
    // Process Char
    processChar(input);
    // Process Int
    processInt(input);

    // Process Float
    processFloatAndDouble(input, 1);

    // Process Double
    processFloatAndDouble(input, 0);
}