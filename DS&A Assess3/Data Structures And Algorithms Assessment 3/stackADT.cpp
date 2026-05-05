#include "stackADT.h"
#include <list>

void stackADT::push(int value) {
	stackADTlist.push_front(value);
}
int stackADT::pop() {
	stackADTlist.pop_front();
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