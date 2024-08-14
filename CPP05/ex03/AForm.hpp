#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    std::string const _name;
    bool _signed;
    int const _signGrade;
    int const _execGrade;

public:
    AForm();
    AForm(const AForm &origin);
    AForm &operator=(const AForm &origin);
    virtual ~AForm();
    
    AForm(std::string const name, int signGrade, int execGrade);

    std::string const getName() const;
    bool getSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;

    void beSigned(Bureaucrat &bureaucrat);

    virtual void execute(Bureaucrat const &executor) const = 0;

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
};

std::ostream &operator<<(std::ostream &out, AForm &form);