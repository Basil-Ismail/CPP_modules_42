#include <ClapTrap.hpp>
#include <DiamondTrap.hpp>
#include <FragTrap.hpp>
#include <ScavTrap.hpp>
void testCaseOne()
{
    DiamondTrap lol;
    lol.whoAmI();
    lol.guardGate();
    lol.highFivesGuys();
    std::cout << lol.FragTrap::getHitPoints() << std::endl;
    std::cout << lol.FragTrap::getEnergyPoints() << std::endl;
    std::cout << lol.FragTrap::getAttackDamage() << std::endl;
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
    DiamondTrap soso("soso");
    FragTrap sasa("sasa");
    ScavTrap last("sese");

    soso.attack(sasa.getName());
}
int main()
{
    testCaseOne();
    std::cout << "-----------------" << std::endl;
    testCaseTwo();
    std::cout << "-----------------" << std::endl;
    testCaseThree();
}