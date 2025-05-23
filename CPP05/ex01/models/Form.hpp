#ifndef FORM_HPP
#define FORM_HPP

#include <Bureaucrat.hpp>
#include <utils.hpp>

class AForm {
protected:
private:
    const std::string _name;
    const short _gradeExecute;
    const short _gradeSigned;
    bool _signed;

public:
    AForm();
    AForm(const AForm&);
    AForm& operator=(const AForm&);
    ~AForm();
    AForm(const std::string, const short, const short);
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
std::ostream& operator<<(std::ostream&, AForm&);

#endif