// ATTEMPT 1 AFTER READING THE CODE AND MAPPING OUT WHAT IS WHAT

#include <iostream>

using namespace std;

// we create the class Stack in which we create a class called stack: in it we have our:
// public: constructor and destructor, variables such as the array, the index and the sizeof
// private: the variables and function hidden to the user or programmer using ds as a black box: data (as a pointer). the size and the index( which refers to the top element)
class Stack {
public:
    // creating our constructor
    Stack(unsigned int s) {
        if (s == 0)
            throw runtime_error("Invalid size for a stack!");

        size = s;
        top = -1;

        data = new int[size];
    }

    // creating a destructor

    ~Stack() {
        delete[] data;

        data = nullptr;
    }

    // isempty(): checks whther the stack is empty or not_eq
    bool empty() {
        return (top == -1);

        /* if (top == -1)
            return true;
           else
            return false;

        */
    }

    // push(int value)
    void push(int value) {
        // three cases: if stack is empty, if stack is full or neither
        if (top == size - 1)
            throw runtime_error("Stack Overflow!");

        // we increment the index pointer
        top = top + 1;
        data[top] = value;

        /* OTHER WAYS OF INCREMENTING AND USING THE NEW INDEEX:
            data[++top] = value;
            top += 1; ..... data[top]  = value;
        */
    }

    int Top() {
        if (empty())
            throw runtime_error("Stack is empty!");

        return data[top];
    }

    int pop() {
        if (empty())
            throw runtime_error("Stack Underflow");

        return data[top--];

        // return data[top];
        // top = top - 1;
        // top--;


    }



private:
    int* data;
    int size;
    int top;


};





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

