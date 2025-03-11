#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <ICharacter.hpp>
#include <iostream>
#include <string>

class AMateria {
protected:
    std::string type;

public:
    AMateria();
    AMateria(const AMateria&);
    AMateria(std::string const& type);
    AMateria& operator=(const AMateria&);
    virtual ~AMateria();

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};

#endif