#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
    : _materiasCount(0)
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}