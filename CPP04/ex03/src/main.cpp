#include <Character.hpp>
#include <Cure.hpp>
#include <IMateriaSource.hpp>
#include <Ice.hpp>
#include <MateriaSource.hpp>
#include <Rizz.hpp>
#include <iostream>
void testCaseOne()
{
    // Subject's test case
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
}

void testCaseTwo()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Rizz());

    ICharacter* Ayooo = new Character("Michel Jackson");

    Ayooo->equip(src->createMateria("ice"));
    Ayooo->equip(src->createMateria("cure"));
    Ayooo->equip(src->createMateria("Rizz"));
    // Example of Failure
    Ayooo->equip(src->createMateria("lol"));

    ICharacter* Angeleena = new Character("Angelena Jolie");

    Ayooo->use(2, *Angeleena);
    Ayooo->use(1, *Angeleena);
    Ayooo->use(0, *Angeleena);
    // Example of what should have been a null pointer
    Ayooo->use(3, *Angeleena);

    delete Angeleena;
    delete Ayooo;
    delete src;
}
int main(void)
{
    testCaseTwo();
}