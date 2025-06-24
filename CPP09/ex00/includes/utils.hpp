#ifndef UTILS_HPP
#define UTILS_HPP

#include <cstdlib>
#include <fstream>
#include <sstream>

std::pair<std::string, std::string> splitString(std::string &input, char delim);
bool dayCheck(std::string &day, int month, int year);
bool monthCheck(std::string &month);
bool yearCheck(std::string &year);
std::string trim(std::string input);

#endif