// a buffer is a single, fixed sized data structure that is also connected end to end
// we use a circular queue in order to implement a Buffer class
// A buffer is a memory allocation that allows us to reuse a previously used location by writing over it using its index
#include <string>
#include <iostream>

class Buffer {
public:

    Buffer(unsigned short int s); // this is a constructor to create a fixed memory location to use and reuse
    ~Buffer(); // destructor to destroy the buffer once we are done, this is to avoid memory leaks and dangling pointers

    bool empty() const;  // this checks if the buffer is empty
    void enqueue(std::string s);  // we pass a string onto the function, check if buffer is not full then push the str onto the adt
    std::string dequeue(); // this checks first if buffer is empty to avoid buffer underflow then removes the first element of adt

private:  // these are the private data that are not accessible by programmers who are using this buffer as a black box

    std::string* data; // this is the array that we initialize as new dynamic string array
    int size, front, rear; // the pointers to first, last elements and the size of the buffer

    int successor(int p) const; // this is a private function that returns the next index of an element
                                // if the index is size - 1 then we return 0 since the buffer uses a circ queue adt
                                // that is connected end to end
};
