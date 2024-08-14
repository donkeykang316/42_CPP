#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _signGrade(1), _execGrade(1) {
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const AForm &origin) : _name(origin._name), _signed(origin._signed), _signGrade(origin._signGrade), _execGrade(origin._execGrade) {
    std::cout << "AForm copy constructor called" << std::endl;
    *this = origin;
}

AForm &AForm::operator=(const AForm &origin) {
    std::cout << "AForm assignation operator called" << std::endl;
    if (this == &origin) {
        this->_signed = origin._signed;
    }
    return *this;
}

AForm::~AForm() {
    std::cout << "AForm " << this->_name << " destructor called" << std::endl;
}

AForm::AForm(std::string const name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
    std::cout << "AForm " << this->getName() << " constructor called" << std::endl;

    if (signGrade < 1 || execGrade < 1) {
        throw AForm::GradeTooHighException();
    } else if (signGrade > 150 || execGrade > 150) {
        throw AForm::GradeTooLowException();
    }
    else
        this->_signed = false;
}

std::string const AForm::getName() const {
    return this->_name;
}

bool AForm::getSigned() const {
    return this->_signed;
}

int AForm::getSignGrade() const {
    return this->_signGrade;
}

int AForm::getExecGrade() const {
    return this->_execGrade;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= this->_signGrade) {
        this->_signed = true;
    } else {
        throw AForm::GradeTooLowException();
    }
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed";
}

std::ostream &operator<<(std::ostream &out, AForm &form) {
    out << "Form " << form.getName() << " is ";
    if (form.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << form.getSignGrade() << " to sign and grade " << form.getExecGrade() << " to execute";
    return out;
}