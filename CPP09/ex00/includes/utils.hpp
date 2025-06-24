#ifndef UTILS_HPP
#define UTILS_HPP

#include <fstream>
#include <sstream>

std::pair<std::string, std::string> splitString(const std::string &input, char delim);
bool dayCheck(std::string &day);
bool monthCheck(std::string &month);
bool yearCheck(std::string &year);

#endif