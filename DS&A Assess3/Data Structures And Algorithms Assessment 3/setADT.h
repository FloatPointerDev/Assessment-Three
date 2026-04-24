#pragma once
class setADT
{
public:
	// setADT
	void add();						// Adds object to the set
	void remove();					// removes object from the set
	void intersection(setADT s);	// Sets this set to the intersection of itself and s
	void difference(setADT s);		// Sets this set between the difference of itself and s
	bool isEmpty();
};

