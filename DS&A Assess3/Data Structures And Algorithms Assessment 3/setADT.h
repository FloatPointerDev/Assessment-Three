#pragma once

class Object {};

class setADT
{
public:
	// setADT
	void add(Object o);				// Adds object to the set
	void remove(Object o);			// removes object from the set
	void intersection(setADT s);	// Sets this set to the intersection of itself and s
	void difference(setADT s);		// Sets this set between the difference of itself and s
	int size();					// Returns the number of objects in the set
	bool isEmpty();					// Returns true if size = 0, else false
};

