#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

void testCaseOne()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
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
    const Cat* Dog = new Cat();
    const Animal* lmao = new Animal();

    lmao->makeSound();
    delete lmao;
    lmao = Dog;
    lmao->makeSound();
    delete Dog;
}

int main(void)
{
    testCaseOne();
    std::cout << "-------------" << std::endl;
    testCaseTwo();
    std::cout << "-------------" << std::endl;
    testCaseThree();
    return (0);
}