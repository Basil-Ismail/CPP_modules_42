#ifndef BUREAUCART_HPP
#define BUREAUCART_HPP

#include <exception>
#include <utils.hpp>

class Bureaucrat {
protected:
private:
    const std::string _name;
    short _grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&);
    virtual ~Bureaucrat();

    const std::string getName();
    const short getGrade();
    void gradePlusOne();
    void gradeMinusOne();
};

#endif