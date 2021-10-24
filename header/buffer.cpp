#include <iostream>
#include <string>
#include "bufhea.h"

Buffer(unsigned short int s){   // create a new buffer in the memory
    if (s == 0)
        throw runtime_error("Invalid Buffer Size!");

    size = s;
    data = new string[size];
    front = 0;
    rear = size - 1;
}

~Buffer(){  // destroys buffer from the memory
    delete [] data;
    data = nullptr;
}

int successor(int p){ // give us the successor of the index input
    if (p == size - 1)
        return 0;

    return p + 1;
}

bool empty(){ // returns tru if the buffer is empty
    return (successor(rear) == front);
}

void enqueue(std::string text){
    if (succesccor(successor(rear)) == front) // check if buffer is full
        throw runtime_error("Buffer OVerflow!");

    data[++rear] = text; // we increment the index of rear to create a new rear for the element to be enqueued
}

std::string dequeue(){ // removes the first element
    if (empty())
        throw runtime_error("Buffer Underflow!");

// we return the front
// we increment the front
return data[front++];
}


