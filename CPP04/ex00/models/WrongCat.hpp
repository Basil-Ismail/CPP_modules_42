#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>

class WrongCat {
protected:
    std::string type;

public:
    WrongCat();
    WrongCat(const WrongCat&);
    WrongCat& operator=(const WrongCat&);
    virtual ~WrongCat();

    virtual void makeSound() const;
    virtual std::string getType() const;
};

#endif