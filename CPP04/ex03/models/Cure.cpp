#include <Cure.hpp>

#include <ICharacter.hpp>

Cure::Cure()
    : AMateria("cure")
{
}

Cure::Cure(const Cure& object)
    : AMateria(object)
{
    *this = object;
}

Cure& Cure::operator=(const Cure& object)
{
    this->type = object.type;
    return *this;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
    Cure* clone = new Cure(*this);
    return clone;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
