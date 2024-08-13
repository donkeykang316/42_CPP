#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const _name;
    bool _signed;
    int const _signGrade;
    int const _execGrade;
    Form();

public:
    Form(const Form &origin);
    Form &operator=(const Form &origin);
    ~Form();

    Form(std::string const name, int const signGrade, int const execGrade);

    std::string const getName() const;
    bool getSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;

    void beSigned(Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class FormAlreadySignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, Form &form);