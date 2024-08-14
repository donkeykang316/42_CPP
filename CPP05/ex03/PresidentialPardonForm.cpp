#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &origin) : AForm(origin) {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = origin;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &origin) {
    std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
    if (this == &origin) {
        this->_target = origin._target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm " << this->getName() <<"destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << "PresidentialPardonForm " << this->getName() << " constructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (!this->getSigned()) {
        throw AForm::FormNotSignedException();
    }
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox, executer was " << executor.getName() << std::endl;
}