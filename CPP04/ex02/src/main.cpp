#include <AAnimal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

void testCaseOne()
{
    const AAnimal* meta = new Cat();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
}

void testCaseTwo()
{
    const WrongAnimal* wrong = new WrongCat();

    std::cout << wrong->getType() << " " << std::endl;
    wrong->makeSound();
    delete wrong;
}

void testCaseThree()
{
    const Cat* cat = new Cat();
    const Cat* dog = new Cat();

    dog->makeSound();
    delete dog;
    dog = cat;
    dog->makeSound();
    delete cat;
}

int main(void)
{
    testCaseOne();
    std::cout << "-------------" << std::endl;
    testCaseTwo();
    std::cout << "-------------" << std::endl;
    testCaseThree();
    std::cout << "-------------" << std::endl;
    std::cout << std::endl;
    // This TestCase stated to be in main
    AAnimal* animals[10];
    for (size_t i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (size_t i = 5; i < 10; i++)
        animals[i] = new Cat();
    for (size_t i = 0; i < 10; i++)
        delete animals[i];

    return (0);
}