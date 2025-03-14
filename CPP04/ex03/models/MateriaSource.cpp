#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
    : _materiasCount(0)
{

    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& object)
    : _materiasCount(object._materiasCount)
{

    for (int i = 0; i < 4; i++) {
        if (object._materias[i])
            _materias[i] = object._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& object)
{
    _materiasCount = object._materiasCount;
    for (int i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
        if (object._materias[i])
            _materias[i] = object._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
    }
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (_materiasCount < 4 && materia) {
        _materias[_materiasCount] = materia;
        _materiasCount++;
    }
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++) {
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }
    return NULL;
}
