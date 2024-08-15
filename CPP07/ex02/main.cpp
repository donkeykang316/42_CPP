#include "Array.hpp"

int main() {
    //test 1
    std::cout << "Test 1" << std::endl;
    Array<int> emptyArray;
    std::cout << "Size of empty array: " << emptyArray.size() << std::endl;
    try {
        std::cout << emptyArray[0] << std::endl; // This should throw an exception
    } catch (const std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    //test 2
    std::cout << "Test 2" << std::endl;
    unsigned int n = 5;
    Array<int> intArray(n);
    std::cout << "Size of intArray: " << intArray.size() << std::endl;
    for (unsigned int i = 0; i < n; i++) {
        std::cout << "Element " << i << ": " << intArray[i] << std::endl; // Should print default initialized values (0 for int)
    }
    std::cout << std::endl;

    //test 3
    std::cout << "Test 3" << std::endl;
    Array<int> originalArray(3);
    originalArray[0] = 1;
    originalArray[1] = 2;
    originalArray[2] = 3;

    Array<int> copyArray = originalArray;
    std::cout << "Original array before modification: ";
    for (unsigned int i = 0; i < originalArray.size(); i++) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    copyArray[1] = 42; // Modify copyArray
    std::cout << "Original array after modification: ";
    for (unsigned int i = 0; i < originalArray.size(); i++) {
        std::cout << originalArray[i] << " "; // Should remain unchanged
    }
    std::cout << std::endl;

    std::cout << "Copy array: ";
    for (unsigned int i = 0; i < copyArray.size(); i++) {
        std::cout << copyArray[i] << " "; // Should reflect the modification
    }
    std::cout << std::endl << std::endl;

    //test 4
    std::cout << "Test 4" << std::endl;
    Array<int> array1(3);
    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;

    Array<int> array2;
    array2 = array1;
    array2[2] = 99; // Modify array2

    std::cout << "Array1 after assignment and modification to Array2: ";
    for (unsigned int i = 0; i < array1.size(); i++) {
        std::cout << array1[i] << " "; // Should remain unchanged
    }
    std::cout << std::endl;

    std::cout << "Array2: ";
    for (unsigned int i = 0; i < array2.size(); i++) {
        std::cout << array2[i] << " "; // Should reflect the modification
    }
    std::cout << std::endl << std::endl;

   //test 5
   std::cout << "Test 5" << std::endl;
    Array<int> arrT5(3);
    try {
        std::cout << arrT5[5] << std::endl; // Out of bounds, should throw an exception
    } catch (const std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    //test 6
    std::cout << "Test 6" << std::endl;
    Array<int> arrTe1(5);
    std::cout << "Size of arr1: " << arrTe1.size() << std::endl; // Should print 5

    Array<int> arrTe2;
    std::cout << "Size of arr2 (empty array): " << arrTe2.size() << std::endl; // Should print 0
    std::cout << std::endl;

    //test 7
    std::cout << "Test 7" << std::endl;
    Array<double> doubleArray(3);
    doubleArray[0] = 1.1;
    doubleArray[1] = 2.2;
    doubleArray[2] = 3.3;

    Array<std::string> stringArray(2);
    stringArray[0] = "Hello";
    stringArray[1] = "World";

    std::cout << "Double Array: ";
    for (unsigned int i = 0; i < doubleArray.size(); i++) {
        std::cout << doubleArray[i] << " "; // Should print 1.1 2.2 3.3
    }
    std::cout << std::endl;

    std::cout << "String Array: ";
    for (unsigned int i = 0; i < stringArray.size(); i++) {
        std::cout << stringArray[i] << " "; // Should print "Hello World"
    }
    std::cout << std::endl << std::endl;

    return 0;
}