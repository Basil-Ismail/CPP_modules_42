#include <Bureaucrat.hpp>

void testCaseOne()
{
    Bureaucrat obj("Ahmed", 150);
    std::cout << obj << std::endl;
    std::cout << "First Test Case\n ------" << std::endl;
}
void testCaseTwo()
{
    Bureaucrat obj("Ahmed", 200);
    std::cout << obj << std::endl;
    std::cout << "Second Test Case\n ------" << std::endl;
}
void testCaseThree()
{
    Bureaucrat obj("Ahmed", -1);
    std::cout << obj << std::endl;
    std::cout << "Thrid Test Case\n ------" << std::endl;
}
int main()
{
    testCaseOne();
    testCaseTwo();
    testCaseThree();
}