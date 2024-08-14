#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    // Test Case 1: Bureaucrat with insufficient grade tries to sign a form
    try {
        Bureaucrat lowLevelBureaucrat("LowLevel", 150);
        ShrubberyCreationForm shrubberyForm("garden");
        lowLevelBureaucrat.executeForm(shrubberyForm);  // Should fail because form is not signed
        shrubberyForm.beSigned(lowLevelBureaucrat);  // Should fail due to low grade
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;  // Expect GradeTooLowException
    }
    std::cout << std::endl;

    // Test Case 2: Bureaucrat with just enough grade to sign and execute a form
    try {
        Bureaucrat midLevelBureaucrat("MidLevel", 72);
        RobotomyRequestForm robotomyForm("target1");

        midLevelBureaucrat.executeForm(robotomyForm);  // Should fail because form is not signed
        robotomyForm.beSigned(midLevelBureaucrat);  // Should succeed
        midLevelBureaucrat.executeForm(robotomyForm);  // Should succeed or fail 50% of the time
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test Case 3: Bureaucrat tries to execute a form without signing it
    try {
        Bureaucrat highLevelBureaucrat("HighLevel", 1);
        PresidentialPardonForm pardonForm("target2");

        highLevelBureaucrat.executeForm(pardonForm);  // Should fail because form is not signed
        pardonForm.beSigned(highLevelBureaucrat);  // Should succeed
        highLevelBureaucrat.executeForm(pardonForm);  // Should succeed
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test Case 4: Bureaucrat with high grade signs and executes multiple forms
    try {
        Bureaucrat topLevelBureaucrat("TopLevel", 1);
        
        ShrubberyCreationForm shrubberyForm("office");
        RobotomyRequestForm robotomyForm("target3");
        PresidentialPardonForm pardonForm("target4");

        shrubberyForm.beSigned(topLevelBureaucrat);
        robotomyForm.beSigned(topLevelBureaucrat);
        pardonForm.beSigned(topLevelBureaucrat);

        topLevelBureaucrat.executeForm(shrubberyForm);  // Should succeed
        topLevelBureaucrat.executeForm(robotomyForm);   // Should succeed or fail 50% of the time
        topLevelBureaucrat.executeForm(pardonForm);     // Should succeed
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test Case 5: Bureaucrat tries to sign a form twice
    try {
        Bureaucrat midLevelBureaucrat("MidLevel", 72);
        RobotomyRequestForm robotomyForm("target5");

        robotomyForm.beSigned(midLevelBureaucrat);  // Should succeed
        robotomyForm.beSigned(midLevelBureaucrat);  // Should have no effect, but should not throw
        midLevelBureaucrat.executeForm(robotomyForm);  // Should succeed or fail 50% of the time
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test Case 6: Bureaucrat tries to execute a form with insufficient grade
    try {
        Bureaucrat lowLevelBureaucrat("LowLevel", 100);
        Bureaucrat highLevelBureaucrat("HighLevel", 1);
        PresidentialPardonForm pardonForm("target6");

        pardonForm.beSigned(highLevelBureaucrat);  // Form is signed by a high-level bureaucrat
        lowLevelBureaucrat.executeForm(pardonForm);  // Should fail due to low execution grade
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;  // Expect GradeTooLowException
    }
    std::cout << std::endl;

    // Test Case 7: Bureaucrat with edge-case grade signs and executes a form
    try {
        Bureaucrat edgeCaseBureaucrat("EdgeCase", 145);
        ShrubberyCreationForm shrubberyForm("park");

        shrubberyForm.beSigned(edgeCaseBureaucrat);  // Should succeed
        edgeCaseBureaucrat.executeForm(shrubberyForm);  // Should fail due to low execution grade
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;  // Expect GradeTooLowException
    }
    std::cout << std::endl;

    // Test Case 8: Bureaucrat with the highest possible grade executes all forms
    try {
        Bureaucrat ultimateBureaucrat("Ultimate", 1);

        ShrubberyCreationForm shrubberyForm("city");
        RobotomyRequestForm robotomyForm("target7");
        PresidentialPardonForm pardonForm("target8");

        shrubberyForm.beSigned(ultimateBureaucrat);
        robotomyForm.beSigned(ultimateBureaucrat);
        pardonForm.beSigned(ultimateBureaucrat);

        ultimateBureaucrat.executeForm(shrubberyForm);  // Should succeed
        ultimateBureaucrat.executeForm(robotomyForm);   // Should succeed or fail 50% of the time
        ultimateBureaucrat.executeForm(pardonForm);     // Should succeed
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
