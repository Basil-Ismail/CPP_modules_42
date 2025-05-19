#include <ScalarConverter.hpp>

int main(int argc, char** argv)
{
    std::string test;

    if (argc == 1)
        test = "123";
    else
        test = argv[1];

    ScalerConverter::convert(test);
}