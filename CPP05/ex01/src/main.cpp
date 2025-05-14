#include <Bureaucrat.hpp>
#include <Form.hpp>
void testCaseOne()
{
    std::cout << "First Test Case\n ------" << std::endl;
    Bureaucrat obj("Ahmed", 150);
    std::cout << obj << std::endl;
}
void testCaseTwo()
{
    std::cout << "Second Test Case\n ------" << std::endl;
    Bureaucrat obj("Ahmed", 200);
    std::cout << obj << std::endl;
}
void testCaseThree()
{
    std::cout << "Thrid Test Case\n ------" << std::endl;
    Bureaucrat obj("Ahmed", -1);
    std::cout << obj << std::endl;
}
void testCaseFour()
{
    std::cout << "Fourth Test Case\n ------" << std::endl;
    try {
        Form obj("basil", 200, -1);
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}
void testCaseFive()
{
    std::cout << "Fifth Test Case\n ------" << std::endl;
    try {
        Form obj("EXAM", 20, 30);
        Bureaucrat obj2("Basil", 1);

        obj2.signForm(obj);
        std::cout << obj;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}
int main()
{
    testCaseOne();
    testCaseTwo();
    testCaseThree();
    testCaseFour();
    testCaseFive();
}