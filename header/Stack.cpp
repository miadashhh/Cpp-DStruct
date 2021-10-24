
// create a class called stack that include a constructor, sdestructor, fcts and data (public n private)
#include <iostream>
#include "Stack.h"

	// constructor
	Stack(unsigned int s) {
		if (s == 0)
			throw runtime_error("Invalid stack size");

		size = s;
		topofStack = -1;

		data = new int[size];

	}
	
	// destructor

	~Stack() {
		delete[] data;
		data = nullptr;
	}


	// empty()
	bool isempty() {
		return (topofStack < 0);  // return true if top of stack is neg, otherwise if it is not
	}

	// push(x)
	void push(int value) {
		if (topofStack == size - 1)
			throw runtime_error("Stack Overflow!");
		
		data[++topofStack] = value;
		/*
		topofstack = topofstack + 1;
		data[topofstack] = value;
		*/
	}

	// top()
	int Top() {
		if (isempty())
			throw runtime_error("The stack is empty")

			retuurn data[topofStack];
	}

	//pop()
	int pop() {
		if (isempty())
			throw runtime_error("Stack Underflow");

		return data[topofStack--];
		/*return data[topofstack]
		topofstack--;
		*/
	}

