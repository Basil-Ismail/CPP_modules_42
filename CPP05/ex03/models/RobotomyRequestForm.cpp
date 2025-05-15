#include <Bureaucrat.hpp>
#include <RobotomyRequestForm.hpp>
#include <utils.hpp>

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("Roboto", 72, 45)
    , _target("Default")
{
    std::cout << "Default Constructor is called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm(target, 72, 45)
    , _target(target)
{
    std::cout << "Custom Constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& object)
    : AForm(object.getName(), object.getExecuteGrade(), object.getSignedGrade())
    , _target(object._target)
{
    std::cout << "Copy Constructor is called" << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& object)
{
    std::cout << "Copy Assignment is called" << std::endl;
    this->setSigned(object.getIfSigned());
    this->_target = object._target;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor is called" << std::endl;
}
void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    else if (!this->getIfSigned())
        throw AForm::GradeTooLowException();
    std::cout << "\a \a \a " << this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

std::ostream& operator<<(std::ostream& os, RobotomyRequestForm& obj)
{
    os << "RobotomyRequestForm: " << obj.getName() << ", Grade to sign: " << obj.getSignedGrade()
       << ", Grade to execute: " << obj.getExecuteGrade() << ", Signed: " << obj.getIfSigned() << ", Target: " << obj.getTarget();
    return os;
}