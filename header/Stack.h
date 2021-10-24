//The header file is where we code the interface of the Stack, meaning the functions/ operations that can be done onto a stack
#pragma once

// create a class called stack that include a constructor, sdestructor, fcts and data (public n private)

class Stack {
public:
	// constructor| & destructor
	Stack(unsigned int s);
	~Stack();
	
	bool isempty();
	void push(int value);
	int Top(); 	
	int pop();
	
private:
	
	int* data;
	int size;
	int topofStack;
};
