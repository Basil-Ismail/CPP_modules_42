#include <Intern.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
Intern::Intern()
{
    _forms[0] = "Robotomy Request";
    _forms[1] = "Presidential Pardon";
    _forms[2] = "Shrubbery Creation";

    std::cout << "Default Constructor is called" << std::endl;
}

Intern::Intern(const Intern& object)
{
    (void)object; // Nothing to be copied :D
    std::cout << "Copy Constructor is called" << std::endl;
}

Intern& Intern::operator=(const Intern& object)
{
    (void)object; // Nothing to be copied :D
    std::cout << "Copy Assignment is called" << std::endl;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Destructor is called " << std::endl;
}
AForm* Intern::createForm(u_int8_t formType, std::string target)
{
    switch (formType) {
    case 0:
        return new RobotomyRequestForm(target);
        break;
    case 1:
        return new PresidentialPardonForm(target);
    case 2:
        return new ShrubberyCreationForm(target);
    default:
        return NULL;
    }
}

AForm* Intern::makeForm(std::string nameForm, std::string target)
{

    for (u_int8_t i = 0; i < 3; i++) {
        if (!this->_forms[i].compare(nameForm))
            return createForm(i, target);
    }
    return (NULL);
}
