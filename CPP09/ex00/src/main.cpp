#include <BitcoinExchange.hpp>
#include <iostream>
#include <utils.hpp>

static int argCheck(int argc)
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
        std::ifstream buff(argv[1]);
        if (!buff.is_open())
            throw std::runtime_error("Invalid file: Can't be open");

        BitcoinExchange exch;
        exch.exchange_rate(buff);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}