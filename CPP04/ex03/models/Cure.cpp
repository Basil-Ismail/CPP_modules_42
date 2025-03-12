#include <Cure.hpp>

Cure::Cure()
    : AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& object)
    : AMateria(object)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = object;
}

Cure& Cure::operator=(const Cure& object)
{
    std::cout << "Cure assignation operator called" << std::endl;
    this->type = object.type;
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    Cure* clone = new Cure(*this);
    return clone;
}