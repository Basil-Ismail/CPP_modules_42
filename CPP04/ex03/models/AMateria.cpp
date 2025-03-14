#include <AMateria.hpp>

#include <ICharacter.hpp>

AMateria::AMateria()
{
}
AMateria::AMateria(const AMateria& other)
{
    *this = other;
}

AMateria::AMateria(std::string const& type)
{
    this->type = type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    this->type = other.type;
    return *this;
}

std::string const& AMateria::getType() const
{
    return this->type;
}

AMateria::~AMateria()
{
}