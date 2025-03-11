#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <ICharacter.hpp>

class Character : public ICharacter {
private:
    std::string _name;
    AMateria* _materias[4];
    int _materiasCount;

public:
    Character();
    Character(std::string name);
    Character(const Character&);
    Character& operator=(const Character&);
    virtual ~Character();

    virtual std::string const& getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif