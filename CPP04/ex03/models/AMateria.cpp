#include <AMateria.hpp>

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(const AMateria& other)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = other;
}

AMateria::AMateria(std::string const& type)
{
    std::cout << "AMateria parameter constructor called" << std::endl;
    this->type = type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "AMateria assignation operator called" << std::endl;
    this->type = other.type;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}