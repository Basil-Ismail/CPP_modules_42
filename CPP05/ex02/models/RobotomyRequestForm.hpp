#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <AForm.hpp>

class RobotomyRequestForm : public AForm {
protected:
private:
    std::string _target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const& executor) const;
    std::string getTarget() const;
};

std::ostream& operator<<(std::ostream&, RobotomyRequestForm&);
#endif