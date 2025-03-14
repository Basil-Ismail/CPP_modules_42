
#include <ICharacter.hpp>
#include <Rizz.hpp>

Rizz::Rizz()
    : AMateria("Rizz")
{
}
Rizz::Rizz(const Rizz& object)
    : AMateria(object)
{
    *this = object;
}

Rizz& Rizz::operator=(const Rizz& object)
{
    this->type = "Rizz";
    (void)object;
    return *this;
}

Rizz::~Rizz()
{
}

AMateria* Rizz::clone() const
{
    Rizz* clone = new Rizz(*this);
    return clone;
}

void Rizz::use(ICharacter& target)
{
    std::cout << "* Hitting  " << target.getName() << "  With Karizzzma *" << std::endl;
}
