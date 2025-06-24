#include <BitcoinExchange.hpp>
#include <iostream>
#include <utils.hpp>

int argCheck(int argc)
{
    if (argc != 2)
    {
        std::cerr << "Invalid number arguments \n" << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int main(int argc, char **argv)
{
    if (argCheck(argc))
        return EXIT_FAILURE;

    try
    {
        std::stringstream buff = checkValidFile(argv[1]);
        BitcoinExchange exch();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}