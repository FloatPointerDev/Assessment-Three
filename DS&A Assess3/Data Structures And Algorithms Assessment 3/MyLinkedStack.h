#pragma once
#include <list>
#include "stackADT.h"

class MyLinkedStack : public stackADT
{
protected:
	std::list<int> IntLinkedList;

public:
	void display();			// Console UI for testing
	void push(int value);	// Adds value to list
	int pop();				// Remove and return value from the list
};