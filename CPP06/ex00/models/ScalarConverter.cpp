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

void ScalerConverter::convert(std::string input)
{
    // Process Char
    processChar(input);
    // Process Int
    processInt(input);

    // Process Float
    std::cout << "float : " << atof(input.c_str()) << "f" << std::endl;

    // Process Double
    std::cout << "double :" << atof(input.c_str()) << std::endl;
}