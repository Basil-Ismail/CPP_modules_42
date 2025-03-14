#include <Character.hpp>

Character::Character()
    : _name("Jack")
    , _materiasCount(0)
{

    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

Character::Character(std::string name)
    : _name(name)
    , _materiasCount(0)
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

Character::Character(const Character& object)
    : _name(object._name)
    , _materiasCount(object._materiasCount)
{
    for (int i = 0; i < 4; i++) {
        if (object._materias[i])
            _materias[i] = object._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

Character& Character::operator=(const Character& objcet)
{
    _name = objcet._name;
    _materiasCount = objcet._materiasCount;
    for (int i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
        if (objcet._materias[i])
            _materias[i] = objcet._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
    }
}

std::string const& Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    if (_materiasCount < 4 && m) {
        for (int i = 0; i < 4; i++) {
            if (!_materias[i]) {
                _materias[i] = m;
                _materiasCount++;
                break;
            }
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && _materias[idx]) {
        _materias[idx] = NULL;
        _materiasCount--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _materias[idx])
        _materias[idx]->use(target);
}