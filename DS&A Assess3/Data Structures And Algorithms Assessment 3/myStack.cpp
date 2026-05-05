#include <iostream>
#include "myStack.h"
#include "stackADT.h"

bool MyStack::isFull() {
	if (stackADTlist.size() >= 20) {
		return true;
	}
	else {
		return false;
	}
}

void MyStack::display() {
	std::cout << "List has " << stackADTlist.size() << " Items\n";

	for (int i = 0; i < stackADTlist.size(); i++) {
		std::cout << "value: " << i << std::endl;
	}
}