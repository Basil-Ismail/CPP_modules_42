#include <AForm.hpp>
#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat()
    : _name("Default")
    , _grade(20)
{
    std::cout << "Default Constructor is called " << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& object)
{
    std::cout << "Copy Constructor is called" << std::endl;
    *this = object;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor is called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, short grade)
    : _name(name)
{
    std::cout << "Custom Constructor is called " << std::endl;
    try {
        if (grade > 150)
            throw GradeTooLowException();
        if (grade < 1)
            throw GradeTooHighException();
        _grade = grade;

    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        this->_grade = 20;
    }
}
const std::string Bureaucrat::getName() const
{
    return this->_name;
}

short Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::signForm(AForm& obj)
{
    if (obj.getIfSigned())
        std::cout << "Bud, it's already signed" << std::endl;
    else {
        obj.beSigned(*this);
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& object)
{
    std::cout << "Copy assignment is called" << std::endl;
    this->_grade = object.getGrade();
    return *this;
}
Bureaucrat& Bureaucrat::operator++()
{
    try {
        if ((this->_grade - 1) < 1)
            throw GradeTooHighException();
        this->_grade--;
        return *this;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return *this;
    }
}
Bureaucrat& Bureaucrat::operator--()
{
    try {
        if ((this->_grade + 1) > 150)
            throw GradeTooLowException();
        this->_grade++;
        return *this;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return *this;
    }
}
void Bureaucrat::executeForm(AForm const& form) const
{
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Too low";
}
std::ostream& operator<<(std::ostream& out, const Bureaucrat& object)
{
    out << object.getName() << ", bureaucrat grade " << object.getGrade();
    return out;
}