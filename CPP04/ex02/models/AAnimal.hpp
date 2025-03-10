#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;

public:
    AAnimal();
    AAnimal(const AAnimal&);
    AAnimal& operator=(const AAnimal&);
    virtual ~AAnimal();

    virtual void makeSound() const = 0;

    std::string getType() const;
};

#endif
