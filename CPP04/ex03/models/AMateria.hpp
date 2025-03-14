#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;
class AMateria {
protected:
    std::string type;

public:
    AMateria();
    AMateria(const AMateria&);
    AMateria(std::string const& type);
    AMateria& operator=(const AMateria&);
    virtual ~AMateria();

    std::string const& getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};

#endif