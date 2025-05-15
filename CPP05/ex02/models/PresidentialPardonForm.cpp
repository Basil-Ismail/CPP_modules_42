#include <Bureaucrat.hpp>
#include <PresidentialPardonForm.hpp>
#include <utils.hpp>

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("President", 25, 5)
    , _target("Default")
{
    std::cout << "Default Constructor is called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("President", 25, 5)
    , _target(target)
{
    std::cout << "Custom Constructor is called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& object)
    : AForm(object.getName(), object.getExecuteGrade(), object.getSignedGrade())
    , _target(object._target)
{
    std::cout << "Copy Constructor is called" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& object)
{
    std::cout << "Copy Assignment is called" << std::endl;
    this->setSigned(object.getIfSigned());
    this->_target = object._target;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor is called" << std::endl;
}
void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    else if (!this->getIfSigned())
        throw AForm::GradeTooLowException();
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

std::ostream& operator<<(std::ostream& os, PresidentialPardonForm& obj)
{
    os << "PresidentialPardonForm: " << obj.getName() << ", Grade to sign: " << obj.getSignedGrade()
       << ", Grade to execute: " << obj.getExecuteGrade() << ", Signed: " << obj.getIfSigned() << ", Target: " << obj.getTarget();
    return os;
}