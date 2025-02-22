#include <Zombie.hpp>
#define NUM 5

Zombie* zombieHorde(int N, std::string name);

int main()
{

    Zombie zomb("Ammar");
    Zombie zomb2("Basil");
    Zombie* zomb3 = zombieHorde(NUM, "Marcus");

    for (size_t i = 0; i < NUM; i++) {
        std::cout << i << " ";
        zomb3[i].announce();
    }
    zomb.announce();
    zomb2.announce();
    delete[] zomb3;
}
