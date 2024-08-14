#pragma once
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();

    AForm *makeShrubberyCreationForm(std::string target);
    AForm *makeRobotomyRequestForm(std::string target);
    AForm *makePresidentialPardonForm(std::string target);
    AForm *makeForm(std::string formName, std::string target);

    class FormNotFoundException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};