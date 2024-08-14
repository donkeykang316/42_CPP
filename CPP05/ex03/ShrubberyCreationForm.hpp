#pragma once
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string _target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &origin);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &origin);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm(std::string target);

    std::string getTarget() const;

    virtual void execute(Bureaucrat const &executor) const;
};