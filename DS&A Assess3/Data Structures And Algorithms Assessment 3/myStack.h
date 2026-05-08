#pragma once
#include "stackADT.h"
#include <list>

class MyStack : public stackADT
{
protected:
	std::list<int> IntArrayList;	// Int list that stores up to 20 integers

public:
	// MyStack
	bool isFull();			// returns full if no more space
	void display();			// Console UI for testing
	void push(int value);	// Adds value to list
	int pop();				// Remove and return value from the list
};

