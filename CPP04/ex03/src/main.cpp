#include <Character.hpp>
#include <Cure.hpp>
#include <IMateriaSource.hpp>
#include <Ice.hpp>
#include <MateriaSource.hpp>
#include <iostream>

int main(void)
{

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    AMateria* tmp2;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp2 = src->createMateria("cure");
    me->equip(tmp2);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}