#ifndef AFORM_HPP
#define AFORM_HPP

#include <Bureaucrat.hpp>
#include <string>
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
    virtual ~AForm();
    AForm(const std::string name, const short egrade, const short sgrade);
    const std::string getName() const;
    short getSignedGrade() const;
    short getExecuteGrade() const;
    bool getIfSigned() const;

    bool beSigned(Bureaucrat&);
    void setSigned(bool sign);

    virtual void execute(Bureaucrat const& executor) const = 0;

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