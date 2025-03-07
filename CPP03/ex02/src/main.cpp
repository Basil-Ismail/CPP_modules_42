#include <ClapTrap.hpp>
#include <FragTrap.hpp>
#include <ScavTrap.hpp>

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
    ClapTrap soso("soso");
    FragTrap sasa("sasa");
    ScavTrap last("sese");

    soso.attack(sasa.getName());
    sasa.attack(last.getName());
    sasa.takeDamage(soso.getAttackDamage());
    last.takeDamage(sasa.getAttackDamage());
    std::cout << soso.getHitPoints() << "  " << sasa.getHitPoints() << " " << last.getHitPoints() << std::endl;
}
int main()
{
    testCaseOne();
    std::cout << "--------------" << std::endl;
    testCaseTwo();
    std::cout << "--------------" << std::endl;
    testCaseThree();
}