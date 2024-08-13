#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	// Test Case 1: Creating a Form with valid grades
    try {
        Form formA("FormA", 50, 25);
        std::cout << "Test Case 1: Form " << formA.getName() << " created with sign grade " 
                  << formA.getSignGrade() << " and execute grade " 
                  << formA.getExecGrade() << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Test Case 1 Failed: " << e.what() << std::endl;
    }
	std::cout << std::endl;

    // Test Case 2: Creating a Form with a grade too high (invalid)
    try {
        Form formB("FormB", 0, 25);
        std::cerr << "Test Case 2 Failed: Exception not thrown as expected." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Test Case 2 Passed: Exception caught -> " << e.what() << std::endl;
    }
	std::cout << std::endl;

    // Test Case 3: Creating a Form with a grade too low (invalid)
    try {
        Form formC("FormC", 151, 25);
        std::cerr << "Test Case 3 Failed: Exception not thrown as expected." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Test Case 3 Passed: Exception caught -> " << e.what() << std::endl;
    }
	std::cout << std::endl;

    // Test Case 4: Bureaucrat with high enough grade signs the Form successfully
    try {
        Bureaucrat alice("Alice", 40);
        Form formD("FormD", 50, 25);
        std::cout << "Test Case 4: " << alice.getName() << " with grade " << alice.getGrade() 
                  << " attempting to sign " << formD.getName() << std::endl;
        formD.beSigned(alice);
        std::cout << "Test Case 4 Passed: " << formD.getName() << " signed status: " 
                  << (formD.getSigned() ? "Signed" : "Not Signed") << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Test Case 4 Failed: " << e.what() << std::endl;
    }
	std::cout << std::endl;

    // Test Case 5: Bureaucrat with too low grade fails to sign the Form
    try {
        Bureaucrat bob("Bob", 100);
        Form formE("FormE", 50, 25);
        std::cout << "Test Case 5: " << bob.getName() << " with grade " << bob.getGrade() 
                  << " attempting to sign " << formE.getName() << std::endl;
        formE.beSigned(bob);
        std::cerr << "Test Case 5 Failed: Exception not thrown as expected." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Test Case 5 Passed: Exception caught -> " << e.what() << std::endl;
    }
	std::cout << std::endl;

    // Test Case 6: Bureaucrat signForm() output validation (both success and failure)
    Bureaucrat charlie("Charlie", 40);
    Form formF("FormF", 50, 25);
    Form formG("FormG", 30, 10);
	std::cout << std::endl;

    // Charlie signing formF (should succeed)
    std::cout << "Test Case 6: ";
    charlie.signForm(formF);
	std::cout << std::endl;

    // Charlie signing formG (should fail)
    std::cout << "Test Case 6: ";
    charlie.signForm(formG);
	std::cout << std::endl;


    return 0;
}
