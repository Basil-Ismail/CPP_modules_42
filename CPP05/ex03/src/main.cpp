#include <AForm.hpp>
#include <Bureaucrat.hpp>
#include <Intern.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
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
    std::cout << "Third Test Case\n ------" << std::endl;
    Bureaucrat obj("Ahmed", -1);
    std::cout << obj << std::endl;
}
void testCaseFour()
{
    std::cout << "Fourth Test Case\n ------" << std::endl;
    try {
        Bureaucrat obj("Basil", 1);
        ShrubberyCreationForm obj2("Shrubbery");
        RobotomyRequestForm obj3("Robotomy");
        PresidentialPardonForm obj4("Presidential");

        std::cout << obj << std::endl;
        std::cout << obj2 << std::endl;
        std::cout << obj3 << std::endl;
        std::cout << obj4 << std::endl;

        obj.signForm(obj2);
        obj.executeForm(obj2);
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}
void testCaseFive()
{
    std::cout << "Fifth Test Case\n ------" << std::endl;
    try {
        RobotomyRequestForm obj("EXAM");
        Bureaucrat obj2("Basil", 1);

        obj2.signForm(obj);
        std::cout << obj;
        obj.execute(obj2);
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}
void testCaseSix()
{
    std::cout << "Sixth Test Case\n ------" << std::endl;
    try {
        PresidentialPardonForm obj("EXAM");
        Bureaucrat obj2("Basil", 1);

        obj2.signForm(obj);
        std::cout << obj;
        obj.execute(obj2);
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}
void testCaseSeven()
{
    std::cout << "Seventh Test Case\n ------" << std::endl;
    try {
        Intern intern;
        AForm* form = intern.makeForm("Robotomy Request", "EXAM");
        Bureaucrat obj("Basil", 1);
        obj.signForm(*form);
        std::cout << *form;
        form->execute(obj);
        delete form;
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
    testCaseSix();
    testCaseSeven();
}