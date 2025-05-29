#ifndef UTILS_HPP
#define UTILS_HPP

#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include <sys/types.h>
void processChar(std::string);
void processInt(std::string input);
std::string trim(std::string input);
int OFAtoi(std::string input);
size_t numericLength(int num);

#endif
