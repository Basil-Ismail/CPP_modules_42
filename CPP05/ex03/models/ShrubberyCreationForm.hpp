#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <AForm.hpp>

class ShrubberyCreationForm : public AForm {
protected:
private:
    std::string _target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const& executor) const;
    std::string getTarget() const;
};

std::ostream& operator<<(std::ostream&, ShrubberyCreationForm&);

#endif