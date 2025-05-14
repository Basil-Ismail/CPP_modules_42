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
    Bureaucrat(std::string, short);

    const std::string getName() const;
    short getGrade() const;

    Bureaucrat& operator++();
    Bureaucrat& operator--();

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif