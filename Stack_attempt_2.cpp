// SECOND ATTEMPT OF IMPLEMENTING A STACK
#include <iostream>

using namespace std;

// lets create our class with the public and private scopes

class Stack {
public:

    Stack(unsigned int stackSize) {  // constructor
        if (stackSize == 0)
            throw runtime_error("Invalid stack size!");

        size = stackSize;
        top = -1;
        data = new int[size];
    }

    ~Stack() {
        delete[] data;

        data = nullptr;
    }

    // empty fct

    bool empty() {
        return (top < 0);
    }

    // push fct

    void push(int element) {
        if (top = size - 1)
            throw runtime_error("Stack Overflow, cannot push any element onto the stack");

        top += top;
        data[top] = element;

        /* or directly code it as:
        data[++top] = element;
        */
    }

    int Top() {
        if (empty())
            throw runtime_error("Stack is empty");

        return data[top];
    }

    int pop() {
        if (empty())
            throw runtime_error("Stack underflow, cannot pop any elements");

        return data[top--];
    }


private:
    int* data;
    int size;
    int top;


};


int main()
{
    Stack my_stack(8);

    if (my_stack.empty())
        cout << "Our stack is empty!";
    else
        cout << "Our stack is not empty!";

    cout << "\n let's push number 4";
    cout << "\n let's push number 8";
    cout << "\n let's push number 6";
    cout << "\n let's push number 81";
    cout << "\n let's push number 5";
    cout << "\n let's push number 466";
    cout << "\n let's push number 1";
    cout << "\n let's push number 54";


    my_stack.push(4);
    my_stack.push(8);
    my_stack.push(6);
    my_stack.push(81);
    my_stack.push(5);
    my_stack.push(466);
    my_stack.push(1);
    my_stack.push(54);

    cout << (my_stack.empty() ? "Stack is empty" : "Stack is full") << endl;

    my_stack.Top();


    try {
        cout << "\n let's push number 49" << endl;
        my_stack.push(49);

    }
    catch (const runtime_error& err) {

        cout << err.what() << endl;
    }

    my_stack.Top();
    cout << (my_stack.empty() ? "Stack is empty" : "Stack is full") << endl;

    cout << "\npop " << my_stack.pop();
    cout << "\npop " << my_stack.pop();
    cout << "\npop " << my_stack.pop();
    cout << "\npop " << my_stack.pop();
    cout << "\npop " << my_stack.pop();
    cout << "\npop " << my_stack.pop();
    cout << "\npop " << my_stack.pop();


    cout << (my_stack.empty() ? "Stack is empty" : "Stack is full") << endl;
    cout << "\npop " << my_stack.Top();

    cout << endl;

    cout << "\npop " << my_stack.pop();

    try {

        cout << "\npop " << my_stack.pop();

    }
    catch (const runtime_error& err) {
        cout << err.what() << endl;

    }


    cout << (my_stack.empty() ? "Stack is empty" : "Stack is full") << endl;

    my_stack.~Stack();
    return 0;
}
