#include <iostream>
#include "MyLinkedStack.h"
#include "stackADT.h"

void MyLinkedStack::display() {
	std::cout << "List has " << IntLinkedList.size() << " Items";

	for (int i = 0; i < IntLinkedList.size(); i++) {
		std::cout << "value: " << i << std::endl;
	}
}
