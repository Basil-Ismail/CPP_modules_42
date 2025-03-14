#ifndef RIZZ_HPP
#define RIZZ_HPP

#include <AMateria.hpp>

class Rizz : public AMateria {
public:
    Rizz();
    Rizz(const Rizz&);
    Rizz& operator=(const Rizz&);
    virtual ~Rizz();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};
#endif