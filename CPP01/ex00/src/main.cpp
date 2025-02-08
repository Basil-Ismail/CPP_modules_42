#include <Zombie.hpp>

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main()
{

        Zombie zomb("Ammar");
        Zombie zomb2("Basil");
        Zombie *heapZomb = newZombie("Batata");
        zomb.announce();
        zomb2.announce();
        heapZomb->announce();

        randomChump("Skill issue!");
        delete heapZomb;
}