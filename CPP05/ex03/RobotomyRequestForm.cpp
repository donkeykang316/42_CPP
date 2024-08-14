#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &origin) : AForm(origin) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = origin;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &origin) {
    std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
    if (this == &origin) {
        this->_target = origin._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm " << this->getName() <<"destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm " << this->getName() << " constructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!this->getSigned()) {
        throw AForm::FormNotSignedException();
    }
    std::cout << "Bzzzz... Bzzzz... Drilling noises..." << std::endl;
    srand(time(NULL));
    if (rand() % 2 == 0) {
        std::cout << this->_target << " has been robotomized successfully by " << executor.getName() << std::endl;
    } else {
        std::cout << "Robotomization of " << this->_target << " has failed!" << std::endl;
    }
}
