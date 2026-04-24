#include "stackADT.h"
#include <list>

std::list<int> stackADTlist;

void stackADT::push(int value) {
	stackADTlist.push_front(value);
}
int stackADT::pop() {
	stackADTlist.pop_back();
	return 0;
}
bool stackADT::isEmpty() {
	if (stackADTlist.empty()) {
		return true;
	}
	else {
		return false;
	}
}

int stackADT::size() {
	return stackADTlist.size();
};