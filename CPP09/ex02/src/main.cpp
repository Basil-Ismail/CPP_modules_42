#include <PmergeMe.hpp>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid Number of arguements" << std::endl;
        return 1;
    }
    try
    {
        PmergeMe sort(argv[1]);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}