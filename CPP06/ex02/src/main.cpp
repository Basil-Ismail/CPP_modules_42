#include <utils.hpp>

int main()
{
    std::srand(std::time(NULL));
    Base* ptr1
        = 0;
    Base* ptr2 = 0;
    try {
        ptr1 = generate();
        ptr2 = generate();
    } catch (...) {
        std::cerr << "Error While allocating" << std::endl;
        delete ptr1;
        delete ptr2;
        return (EXIT_FAILURE);
    }
    identify(ptr1);
    identify(*ptr2);
    Base test;
    identify(test);
    delete ptr1;
    delete ptr2;
    return (EXIT_SUCCESS);
}