#include <iostream>
#include "myStack.h"
#include "stackADT.h"

bool MyStack::isFull() {
	if (IntArrayList.size() >= 20) {
		return true;
	}
	else {
		return false;
	}
}

void MyStack::display() {
	std::cout << "List has " << IntArrayList.size() << " Items";

	for (int i = 0; i < IntArrayList.size(); i++) {
		std::cout << "value: " << i << std::endl;
	}
}