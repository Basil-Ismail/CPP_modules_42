#include <Zombie.hpp>

Zombie *zombieHorde(int N, std::string name);

int main()
{

        Zombie zomb("Ammar");
        Zombie zomb2("Basil");
        Zombie *zomb3 = zombieHorde(10, "Marcus");

        for (size_t i = 0; i < 10; i++)
        {
                std::cout << i;
                zomb3[i].announce();
        }
        delete[] zomb3;
}
