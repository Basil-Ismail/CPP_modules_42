#ifndef FORM_HPP
#define FORM_HPP

#include <Bureaucrat.hpp>
#include <utils.hpp>

class Form {
protected:
private:
    const std::string _name;
    const short _gradeSigned;
    const short _gradeExecute;
    bool _signed;

public:
    Form();
    Form(const Form&);
    Form& operator=(const Form&);
    ~Form();

    const std::string getName() const;
    const short getSignedGrade() const;
    const short getExecuteGrade() const;
    bool getIfSigned() const;

    bool beSigned(Bureaucrat&);
    void signForm();

    class GradetooHighException : public Bureaucrat::GradeTooHighException {
    public:
        GradetooHighException()
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