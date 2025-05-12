#include <Bureaucrat.hpp>

int main()
{
    Bureaucrat obj("Ahmed", 150);
    Bureaucrat obj2(obj);
    std::cout << obj2 << std::endl;
    std::cout << "Hey there!" << std::endl;
}