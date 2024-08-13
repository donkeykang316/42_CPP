#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    ShrubberyCreationForm();

public:
    ShrubberyCreationForm(const ShrubberyCreationForm &origin);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &origin);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm(std::string const target);

    virtual void execute(Bureaucrat const &executor) const;
};