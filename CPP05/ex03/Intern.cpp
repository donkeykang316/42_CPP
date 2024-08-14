#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(const Intern &other) {
    std::cout << "Intern copy constructor" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &other) {
    std::cout << "Intern assignment operator" << std::endl;
    (void)other;
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern destructor" << std::endl;
}

AForm *Intern::makeShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target) {
    AForm   *(Intern::*formCreators[3])(std::string) = {
        &Intern::makeShrubberyCreationForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm
    };
    std::string formNames[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formName << " form" << std::endl;
            return (this->*formCreators[i])(target);
        }
    }
    throw Intern::FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw() {
    return "Form not found";
}
