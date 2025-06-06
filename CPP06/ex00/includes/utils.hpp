#ifndef UTILS_HPP
#define UTILS_HPP

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <sys/types.h>

enum dataTypes {
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

void processChar(std::string);
void processInt(std::string input);
void processFloatAndDouble(std::string input, int mode);
std::string trim(std::string input);
int OFAtoi(std::string input);
size_t numericLength(int num);
bool checkForPL(std::string input, int mode);
bool myIsPrint(char c);
int detectInput(std::string input);

#endif
