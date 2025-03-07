#include <ClapTrap.hpp>
#include <FragTrap.hpp>
void testCaseOne()
{
    FragTrap obj("Ahmed");
    FragTrap mohsen;
    mohsen = obj;
    mohsen.highFivesGuys();
}

void testCaseTwo()
{
    ClapTrap lmao;
    FragTrap newOne("SISo");

    lmao = newOne;
    lmao.attack("Hoyaa");
}
void testCaseThree()
{
    FragTrap soso("soso");
    FragTrap sasa("sasa");

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