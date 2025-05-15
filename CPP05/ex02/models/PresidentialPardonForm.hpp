#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <AForm.hpp>

class PresidentialPardonForm : public AForm {
protected:
private:
    std::string _target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const& executor) const;
    std::string getTarget() const;
};

std::ostream& operator<<(std::ostream&, PresidentialPardonForm&);
#endif