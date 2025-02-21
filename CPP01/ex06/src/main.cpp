#include <Harl.class.hpp>

int main(int argc, char** argv)
{
    Harl annoying;
    if (argc != 2) {
        std::cerr << "Not a vaild number of arguments." << std::endl;
        return 1;
    }
    annoying.complain(argv[1]);
}