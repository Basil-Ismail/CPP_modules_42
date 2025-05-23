#include <Form.hpp>

AForm::AForm()
    : _name("Default")
    , _gradeExecute(30)
    , _gradeSigned(20)
    , _signed(false)
{
    std::cout << "Default Constructor is called" << std::endl;
}

AForm::AForm(const std::string name, const short egrade, const short sgrade)
    : _name(name)
    , _gradeExecute(egrade)
    , _gradeSigned(sgrade)
    , _signed(false)
{
    if (_gradeExecute > 150 || _gradeSigned > 150)
        throw AForm::GradeTooLowException();
    else if (_gradeExecute < 1 || _gradeSigned < 1)
        throw AForm::GradeTooHighException();
    std::cout << "Custom Form Constructor is called Successfully" << std::endl;
}

AForm::AForm(const AForm& object)
    : _name(object.getName())
    , _gradeExecute(object.getExecuteGrade())
    , _gradeSigned(object.getSignedGrade())
    , _signed(object.getIfSigned())

{
    std::cout << "Copy Constructor is called" << std::endl;
}
AForm& AForm::operator=(const AForm& object)
{
    std::cout << "Copy Assignment is called" << std::endl;
    this->_signed = object.getIfSigned();
    return *this;
}

AForm::~AForm()
{
    std::cout << "Form Destructor is called " << std::endl;
}

const std::string AForm::getName() const
{
    return this->_name;
}

short AForm::getExecuteGrade() const
{
    return this->_gradeExecute;
}

short AForm::getSignedGrade() const
{
    return this->_gradeSigned;
}

bool AForm::getIfSigned() const
{
    return this->_signed;
}

bool AForm::beSigned(Bureaucrat& mommy)
{
    if (mommy.getGrade() > this->getSignedGrade()) {
        std::cout << mommy.getName() << " couldn't sign " << this->getName() << " because  Grade is lower than the required Signed Grade" << std::endl;
        return false;
    }
    std::cout << mommy.getName() << " Signed " << this->getName() << std::endl;
    return (_signed = true);
}
std::ostream& operator<<(std::ostream& out, AForm& object)
{
    out << object.getName() << " ,Execute Grade: " << object.getExecuteGrade() << " ,Sign Grade: " << object.getSignedGrade() << " and it is " << (object.getIfSigned() ? " Signed" : " Not Signed") << std::endl;
    return out;
}