#ifndef INTERN_HPP
#define INTERN_HPP

#include <AForm.hpp>
#include <sys/types.h>
#include <utils.hpp>

class Intern {
protected:
private:
    std::string _forms[3];
    AForm* createForm(u_int8_t, std::string);

public:
    Intern();
    Intern(const Intern&);
    Intern& operator=(const Intern&);
    ~Intern();

    AForm* makeForm(std::string nameForm, std::string target);
};

std::ostream& operator<<(std::ostream&, Intern&);

#endif