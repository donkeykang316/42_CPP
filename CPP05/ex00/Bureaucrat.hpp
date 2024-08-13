#include <iostream>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
    Bureaucrat();

public:
    Bureaucrat(const Bureaucrat &origin);
    Bureaucrat &operator=(const Bureaucrat &origin);
    ~Bureaucrat();

    Bureaucrat(int grade);
    Bureaucrat(std::string const name, int grade);

    void incrementGrade();
    void decrementGrade();

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

    const std::string getName() const;
    int getGrade();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat);