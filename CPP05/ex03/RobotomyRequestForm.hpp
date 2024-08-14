#pragma once
#include <ctime>
#include <cmath>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string _target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &orign);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &origin);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm(std::string target);

    std::string getTarget() const;

    virtual void execute(Bureaucrat const &executor) const;
};