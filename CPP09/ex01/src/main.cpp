#include <iostream>
#include <utils.hpp>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid Number of arguements" << std::endl;
        return 1;
    }
    std::cout << argv[1] << std::endl;
}