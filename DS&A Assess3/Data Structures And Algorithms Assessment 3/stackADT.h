#pragma once
#include <list>

class stackADT
{
protected:
	std::list<int> stackADTlist;

public:
	// StackADT
	void push(int value);	// Adds value to list
	int pop();				// Remove and return value from the list
	bool isEmpty();			// Returns true if the value is empty
	int size();				// Returns number of items in the stack
};

