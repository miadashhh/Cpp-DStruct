#include <iostream>
#include <Header1.h>

using namespace std;

int main() {





    Stack s(5); // we are constructing an object of class stack with the size 5


 // after construction of a stack, we must note that they are always empty, and then we can perform operations onto them
    cout << "\n" << (s.empty() ? "The stack is empty!" : "The stack is not empty") << "\n";


    // each of these will call the push function, check if the stack is full, ,if not then perform the operation until we encounter a stack overflow exception
    cout << "\npush 9";
    cout << "\npush 7";
    cout << "\npush 5";
    cout << "\npush 3";
    cout << "\npush 1";

    s.push(9);
    s.push(7);
    s.push(5);
    s.push(3);
    s.push(1);

    // after inserting 5 numbers the stack is full, when trying to push a new item an exception occurs and it is handled using the try-catch statement


     // we try another value to see if we can add onto the stack , if not we catch a runtime error
    try {

        cout << "\npush 0, ";
        s.push(0);

    }
    catch (const runtime_error& err) {

        cout << "Error: " << err.what() << "\n";

    }

    // when the stack is full we can either pop. top or deconstruct it
    // lets check if it is empty using a ternary statement such as below

    cout << "\n" << (s.empty() ? "The stack is empty!" : "The stack is not empty") << "\n";

    // we keep poping the last element until we get to the index -1, ie we have an empty stack and we cant pop anymore (stack underflow)
    cout << "\npop " << s.pop();
    cout << "\npop " << s.pop();
    cout << "\npop " << s.pop();
    cout << "\npop " << s.pop();
    cout << "\npop " << s.pop();
    cout << "\n";

    cout << "\n" << (s.empty() ? "The stack is empty!" : "The stack is not empty") << "\n";

    // the object is deallocated to avoid memory leaks

 // since we are done with our stack operations, its best to get rid of the stack by deallocationg it from the memory
 // this is done so that we dont misuse memory and waste it
    s.~Stack();
}
