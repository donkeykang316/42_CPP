#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &origin) : _name(origin._name) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = origin;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &origin) {
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if (this != &origin) {
        _grade = origin._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat " << this->_name << " destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _name("default") {
    std::cout << "Bureaucrat" << this->_name << " constructor called" << std::endl;
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        _grade = grade;
    }
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
    std::cout << "Bureaucrat " << this->_name << " constructor called" << std::endl;
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        _grade = grade;
    }
}

void Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else {
        _grade--;
    }
}

void Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        _grade++;
    }
}

const std::string Bureaucrat::getName() const{
    return _name;
}

int Bureaucrat::getGrade() {
    return _grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}