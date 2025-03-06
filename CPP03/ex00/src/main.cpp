#include <ClapTrap.hpp>

void testCaseOne()
{
    ClapTrap lol;
    ClapTrap me("Van Dik");

    lol.attack(me.getName());
    me.takeDamage(lol.getAttackDamage());
    me.beRepaird(1);
}

void testCaseTwo()
{
    ClapTrap father("Darth Vader");
    ClapTrap son("Luke");
    son.setAttackDamage(10);
    son.attack(father.getName());
    father.takeDamage(son.getAttackDamage());
}
void testCaseThree()
{
    ClapTrap lol;
    ClapTrap me("Van Dik");

    lol.setAttackDamage(2);
    for (size_t i = 0; i < 11; i++) {
        lol.attack(me.getName());
        me.takeDamage(lol.getAttackDamage());
        me.beRepaird(1);
    }
}
int main()
{
    testCaseThree();
}