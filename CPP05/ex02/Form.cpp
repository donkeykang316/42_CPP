#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _signGrade(150), _execGrade(150) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &origin) : _name(origin._name), _signGrade(origin._signGrade), _execGrade(origin._execGrade) {
    std::cout << "Form copy constructor called" << std::endl;
    *this = origin;
}

Form &Form::operator=(const Form &origin) {
    std::cout << "Form assignation operator called" << std::endl;
    if (this != &origin) {
        _signed = origin._signed;
    }
    return *this;
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

Form::Form(std::string const name, int const signGrade, int const execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
    std::cout << "Form " << this->_name << " constructor called" << std::endl;
    if (signGrade < 1 || execGrade < 1) {
        throw Form::GradeTooHighException();
    } else if (signGrade > 150 || execGrade > 150) {
        throw Form::GradeTooLowException();
    }
}

std::string const Form::getName() const {
    return _name;
}

bool Form::getSigned() const {
    return _signed;
}

int Form::getSignGrade() const {
    return _signGrade;
}

int Form::getExecGrade() const {
    return _execGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _signGrade) {
        throw Form::GradeTooLowException();
    } else {
        _signed = true;
    }
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Form &form) {
    out << "Form " << form.getName() << " is ";
    if (form.getSigned()) {
        out << "signed";
    } else {
        out << "not signed";
    }
    out << " and requires grade " << form.getSignGrade() << " to sign and grade " << form.getExecGrade() << " to execute" << std::endl;
    return out;
}