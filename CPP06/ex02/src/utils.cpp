#include <utils.hpp>

Base* generate(void)
{
    int rand = std::rand() % 3;

    switch (rand) {
    case 0:
        return new A();
        break;
    case 1:
        return new B();
        break;
    case 2:
        return new C();
        break;
    default:
        break;
    }
    return NULL;
}

void identify(Base* p)
{

    A* t1 = dynamic_cast<A*>(p);
    if (t1) {
        std::cout << "Points to A Class" << std::endl;
        return;
    }
    B* t2 = dynamic_cast<B*>(p);
    if (t2) {
        std::cout << "Points to B Class" << std::endl;
        return;
    }
    C* t3 = dynamic_cast<C*>(p);
    if (t3) {
        std::cout << "Points to C Class" << std::endl;
        return;
    }
    std::cout << "It's invalid ptr, or it points to none of the base inherited class" << std::endl;
}

void identify(Base& p)
{
    try {
        A& t1 = dynamic_cast<A&>(p);
        (void)t1;
        std::cout << "Referance to A Class" << std::endl;
    } catch (const std::exception& e) {
    }
    try {
        B& t1 = dynamic_cast<B&>(p);
        (void)t1;
        std::cout << "Referance to B Class" << std::endl;

    } catch (const std::exception& e) {
    }
    try {
        C& t1 = dynamic_cast<C&>(p);
        (void)t1;
        std::cout << "Referance to C Class" << std::endl;
    } catch (const std::exception& e) {
    }
}