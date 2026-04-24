#pragma once
#include <list>
#include "stackADT.h"

class MyLinkedStack : public stackADT
{
public:
	void display();
	std::list<int> IntLinkedList;
};

