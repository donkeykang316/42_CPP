#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
    std::cout << "ShrubberyCreationForm default constructor called (target default)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &origin) : AForm(origin), _target(origin._target) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = origin;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &origin) {
    std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
    if (this == &origin) {
        this->_target = origin._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm parameter constructor called (target " << target << ")" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
    return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!getSigned()) {
        throw AForm::FormNotSignedException();
    }
    std::ofstream outfile((getTarget() + "_shrubbery").c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: could not open file" << std::endl;
        return;
    }

    outfile << "      _-_\n"
            "   /~~   ~~\\\n"
            "/~~         ~~\\\n"
            "\\    O  O    /\n"
            " \\           /\n"
            "  \\  { }  /\n"
            "   \\     /\n"
            "    |   |\n"
            "    |   |\n"
            "    |   |\n"
            "    |   |\n"
            "   /~~~~~\\\n"
            "  /       \\\n"
            " /         \\\n";

    outfile.close();
    std::cout << "ShrubberyCreationForm " << getTarget() << " has been executed by " << executor.getName() << std::endl;
}