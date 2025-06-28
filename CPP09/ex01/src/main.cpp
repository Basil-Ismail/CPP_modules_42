#include <RPN.hpp>
#include <utils.hpp>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Should have only a single Arugment." << std::endl;
        return 1;
    }
    try
    {
        RPN expresesion(argv[1]);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}