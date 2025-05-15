#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <fstream>
#include <utils.hpp>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Shrubbery", 72, 45)
    , _target("Default")
{
    std::cout << "Default Constructor is called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm(target, 72, 45)
    , _target(target)
{
    std::cout << "Custom Constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& object)
    : AForm(object.getName(), object.getExecuteGrade(), object.getSignedGrade())
    , _target(object._target)
{
    std::cout << "Copy Constructor is called" << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& object)
{
    std::cout << "Copy Assignment is called" << std::endl;
    this->setSigned(object.getIfSigned());
    this->_target = object._target;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor is called" << std::endl;
}
void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    else if (!this->getIfSigned())
        throw AForm::GradeTooLowException();
    std::ofstream file((this->getTarget() + "_shrubbery").c_str());
    file << "ASCII ART OF A SHRUBBERY";
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

std::ostream& operator<<(std::ostream& os, ShrubberyCreationForm& obj)
{
    os << "ShrubberyCreationForm: " << obj.getName() << ", Grade to sign: " << obj.getSignedGrade()
       << ", Grade to execute: " << obj.getExecuteGrade() << ", Signed: " << obj.getIfSigned() << ", Target: " << obj.getTarget();
    return os;
}