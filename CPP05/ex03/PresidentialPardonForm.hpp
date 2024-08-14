#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &origin);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &origin);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm(std::string target);

    std::string getTarget() const;

    virtual void execute(Bureaucrat const &executor) const;
};