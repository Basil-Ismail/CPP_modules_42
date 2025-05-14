#include <Form.hpp>

Form::Form()
    : _name("Default")
    , _gradeExecute(30)
    , _gradeSigned(20)
    , _signed(false)
{
    std::cout << "Default Constructor is called" << std::endl;
}
Form::Form(const Form& object)
    : _name(object.getName())
    , _gradeExecute(object.getExecuteGrade())
    , _gradeSigned(object.getSignedGrade())
    , _signed(object.getIfSigned())

{
    std::cout << "Copy Constructor is called" << std::endl;
}
Form& Form::operator=(const Form& object)
{
    std::cout << "Copy Assignment is called" << std::endl;
    this->_signed = object.getIfSigned();
    return *this;
}

Form::~Form()
{
    std::cout << "Form Destructor is called " << std::endl;
}

const std::string Form::getName() const
{
    return this->_name;
}

const short Form::getExecuteGrade() const
{
    return this->_gradeExecute;
}

const short Form::getSignedGrade() const
{
    return this->_gradeSigned;
}

bool Form::getIfSigned() const
{
    return this->_signed;
}

bool Form::beSigned(Bureaucrat& mommy)
{
    if (mommy.getGrade() > this->getSignedGrade())
        this->_signed = true;
    else
        std::cout << mommy.getName() << " couldn't sign " << this->getName() << " because " <<
}
// std::ostream& operator<<(std::ostream& out, Form& object)
// {
//         out <<
// }