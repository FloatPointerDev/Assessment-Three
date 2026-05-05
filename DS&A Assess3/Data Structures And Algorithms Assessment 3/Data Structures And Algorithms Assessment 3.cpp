#include <iostream>
#include "myStack.h"
#include "stackADT.h"
#include "setADT.h"
#include "MyLinkedStack.h"

int main()
{
    void stackdriver(); {
        MyStack astack;
        std::cout << "testing Stack " << std::endl;
        std::cout << "stack is empty " << (astack.isEmpty() ? "true" : "false") << std::endl;

        for (int i = 1; i < 6; i++) {
            astack.push(i);
        }

        std::cout << "num values in stack: " << astack.size() << std::endl;
        astack.display();
        std::cout << "popping value: " << astack.pop() << std::endl;
        std::cout << "value 5 should have been removed" << std::endl;
        astack.display();
    }

    void linkedStackDriver(); {
        MyLinkedStack astack;
        std::cout << "testing Stack " << std::endl;
        std::cout << "stack is empty " << (astack.isEmpty() ? "true" : "false") << std::endl;

        for (int i = 1; i < 6; i++) {
            astack.push(i);
        }

        std::cout << "num values in stack: " << astack.size() << std::endl;
        astack.display();
        std::cout << "popping value: " << astack.pop() << std::endl;
        std::cout << "value 5 should have been removed" << std::endl;
        astack.display();
    }
}