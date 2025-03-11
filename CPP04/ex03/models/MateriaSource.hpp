#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource {
private:
    AMateria* _materias[4];
    int _materiasCount;

public:
    MateriaSource();
    MateriaSource(const MateriaSource&);
    MateriaSource& operator=(const MateriaSource&);
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const& type);
};
#endif