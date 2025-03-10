#ifndef CAT_HPP
#define CAT_HPP

#include <Animal.hpp>
#include <Brain.hpp>
class Cat : public AAnimal {
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&);
    ~Cat();

    void makeSound() const;
    const Brain* getBrain() const;
};
#endif