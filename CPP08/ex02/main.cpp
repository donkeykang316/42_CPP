#include "MutantStack.hpp"
#include <list>

int main() {
//test 1
std::cout << "Test 1" << std::endl;
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << "top: " << mstack.top() << std::endl;
mstack.pop();
std::cout << "size: " << mstack.size() << std::endl << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
std::cout << "MutantStack: " << mstack.size() << " | Stack: " << s.size() << std::endl;
while (!mstack.empty()) {
	mstack.pop();
}
std::cout << "MutantStack: " << mstack.size() << " | Stack: " << s.size() << std::endl;
std::cout << std::endl;


    //test 2
    std::cout << "Test 2" << std::endl;
    MutantStack<int> mstack1;
    mstack1.push(1);
    mstack1.push(2);
    mstack1.push(3);

    std::list<int> mylist;
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);

    std::cout << "MutantStack1 elements:" << std::endl;
    for (MutantStack<int>::iterator it = mstack1.begin(); it != mstack1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "std::list elements:" << std::endl;
    for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << std::endl;

    //test 3
    std::cout << "Test 3" << std::endl;
    MutantStack<std::string> mstack2;
    
    mstack2.push("Hello");
    mstack2.push("World");
    mstack2.push("!");
    
    std::cout << "MutantStack with strings:" << std::endl;
    for (MutantStack<std::string>::iterator it = mstack2.begin(); it != mstack2.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
return 0;
}