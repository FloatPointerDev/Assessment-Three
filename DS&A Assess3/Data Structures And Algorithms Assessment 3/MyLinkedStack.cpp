#include <iostream>
#include "MyLinkedStack.h"
#include "stackADT.h"

void MyLinkedStack::display() {
	std::cout << "List has " << IntLinkedList.size() << " Items\n";

	for (int i = 0; i < IntLinkedList.size(); i++) {
		std::cout << "value: " << i << std::endl;
	}
}

void MyLinkedStack::push(int value) {
	IntLinkedList.push_front(value);
}
int MyLinkedStack::pop() {
	IntLinkedList.pop_front();
	return 0;
}
