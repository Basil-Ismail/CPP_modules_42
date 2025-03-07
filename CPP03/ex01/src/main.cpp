#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
void testCaseOne()
{
    ScavTrap obj("Ahmed");
    ScavTrap mohsen;
    mohsen = obj;
    mohsen.guardGate();
}

void testCaseTwo()
{
    ClapTrap lmao;
    ScavTrap newOne("SISo");

    lmao = newOne;
    lmao.attack("Hoyaa");
}
void testCaseThree()
{
    ScavTrap soso("soso");
    ScavTrap sasa("sasa");

    soso.attack(sasa.getName());
    sasa.takeDamage(soso.getAttackDamage());

    std::cout << soso.getHitPoints() << "  " << sasa.getHitPoints() << std::endl;
}
int main()
{
    testCaseOne();
    std::cout << "--------------" << std::endl;
    testCaseTwo();
    std::cout << "--------------" << std::endl;
    testCaseThree();
}