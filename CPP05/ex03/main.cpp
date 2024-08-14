#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
    // Test Case 1: Intern creates a valid ShrubberyCreationForm
    try {
        Intern someIntern;
        AForm* form1 = someIntern.makeForm("shrubbery creation", "backyard");

        if (form1) {
            Bureaucrat bob("Bob", 140);
            form1->beSigned(bob);
            bob.executeForm(*form1);  // Should succeed
            delete form1;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test Case 2: Intern creates a valid RobotomyRequestForm
    try {
        Intern someIntern;
        AForm* form2 = someIntern.makeForm("robotomy request", "robot");

        if (form2) {
            Bureaucrat alice("Alice", 50);
            form2->beSigned(alice);
            alice.executeForm(*form2);  // Should succeed or fail 50% of the time
            delete form2;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test Case 3: Intern creates a valid PresidentialPardonForm
    try {
        Intern someIntern;
        AForm* form3 = someIntern.makeForm("presidential pardon", "John Doe");

        if (form3) {
            Bureaucrat zaphod("Zaphod", 1);
            form3->beSigned(zaphod);
            zaphod.executeForm(*form3);  // Should succeed
            delete form3;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test Case 4: Intern tries to create a non-existent form
    try {
        Intern someIntern;
        AForm* form4 = someIntern.makeForm("unknown form", "test target");

        if (form4) {
            delete form4;  // Should not happen, form4 should be nullptr
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test Case 5: Intern creates multiple forms and bureaucrats execute them
    try {
        Intern someIntern;

        AForm* shrubberyForm = someIntern.makeForm("shrubbery creation", "office");
        AForm* robotomyForm = someIntern.makeForm("robotomy request", "Bender");
        AForm* pardonForm = someIntern.makeForm("presidential pardon", "Ford Prefect");

        Bureaucrat bob("Bob", 145);
        Bureaucrat alice("Alice", 50);
        Bureaucrat zaphod("Zaphod", 1);

        if (shrubberyForm) {
            shrubberyForm->beSigned(bob);
            bob.executeForm(*shrubberyForm);  // Should succeed
            delete shrubberyForm;
        }

        if (robotomyForm) {
            robotomyForm->beSigned(alice);
            alice.executeForm(*robotomyForm);  // Should succeed or fail 50% of the time
            delete robotomyForm;
        }

        if (pardonForm) {
            pardonForm->beSigned(zaphod);
            zaphod.executeForm(*pardonForm);  // Should succeed
            delete pardonForm;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
