#include <Ice.hpp>

Ice::Ice()
    : AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}
Ice::Ice(const Ice& object)
    : AMateria(object)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = object;
}

Ice& Ice::operator=(const Ice& object)
{
    std::cout << "Ice assignation operator called" << std::endl;
    this->type = object.type;
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    Ice* clone = new Ice(*this);
    return clone;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
