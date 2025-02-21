#ifndef HARL_CLASS_HPP
#define HARL_CLASS_HPP

#include <iostream>
#include <string>

class Harl {
private:
    void debug();
    void info();
    void warning();
    void error();

public:
    void complain(std::string);
};
#endif