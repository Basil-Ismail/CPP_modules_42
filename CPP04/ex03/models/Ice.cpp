#include <Ice.hpp>

#include <ICharacter.hpp>
Ice::Ice()
    : AMateria("ice")
{
}
Ice::Ice(const Ice& object)
    : AMateria(object)
{
    *this = object;
}

Ice& Ice::operator=(const Ice& object)
{
    this->type = object.type;
    return *this;
}

Ice::~Ice()
{
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
