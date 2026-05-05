#include <iostream>
#include "MyLinkedStack.h"
#include "stackADT.h"

void MyLinkedStack::display() {
	std::cout << "List has " << stackADTlist.size() << " Items\n";

	for (int i = 0; i < stackADTlist.size(); i++) {
		std::cout << "value: " << i << std::endl;
	}
}
