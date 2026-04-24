#pragma once
#include "stackADT.h"
#include <list>

class MyStack : public stackADT
{
public:
	// MyStack
	bool isFull();		// returns full if no more space
	void display();		// Console UI for testing
	std::list<int> IntArrayList = std::list<int>(20);	// Int list that stores up to 20 integers
};

