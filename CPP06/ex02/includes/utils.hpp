#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <string>

#include <A.hpp>
#include <B.hpp>
#include <Base.hpp>
#include <C.hpp>
#include <cstdlib>
#include <ctime>
#include <utils.hpp>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif