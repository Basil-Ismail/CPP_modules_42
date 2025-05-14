#ifndef FORM_HPP
#define FORM_HPP

#include <Bureaucrat.hpp>
#include <utils.hpp>

class Form {
protected:
private:
    const std::string _name;
    const short _gradeExecute;
    const short _gradeSigned;
    bool _signed;

public:
    Form();
    Form(const Form&);
    Form& operator=(const Form&);
    ~Form();
    Form(const std::string, const short, const short);
    const std::string getName() const;
    short getSignedGrade() const;
    short getExecuteGrade() const;
    bool getIfSigned() const;

    bool beSigned(Bureaucrat&);

    class GradeTooHighException : public Bureaucrat::GradeTooHighException {
    public:
        GradeTooHighException()
            : Bureaucrat::GradeTooHighException()
        {
        }
    };
    class GradeTooLowException : public Bureaucrat::GradeTooLowException {
    public:
        GradeTooLowException()
            : Bureaucrat::GradeTooLowException()
        {
        }
    };
};
std::ostream& operator<<(std::ostream&, Form&);

#endif