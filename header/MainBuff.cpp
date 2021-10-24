#include <iostream>
#include "bufhea.h"

using namespace std;

int main(int argc, char* argv[]) {

    Buffer words(12);

    words.enqueue("Hello");
    words.enqueue(",");
    words.enqueue(" ");
    words.enqueue("this");
    words.enqueue(" ");
    words.enqueue("buffer");
    words.enqueue(" ");
    words.enqueue("is");
    words.enqueue(" ");
    words.enqueue("interesting");
    words.enqueue(",");
    words.enqueue(" ");
    words.enqueue("right");
    words.enqueue("?");

    cout << "\nWords  : ";

    while (!words.empty()) {          // we keep dequeuing elements off the buffer 'word' until its empty then we move on
        cout << words.dequeue();
    }

    words.~Buffer(); // after the buffer 'word' is empty we destroy it to avoid memory leaks and dangling pointers

    Buffer numbers(7);  // we construct a new buffer called 'numbers'

    numbers.enqueue("1");
    numbers.enqueue("2");
    numbers.enqueue("4");
    numbers.enqueue("8");
    numbers.enqueue("16");
    numbers.enqueue("32");
    numbers.enqueue("64");
    numbers.enqueue("128");

    cout << "\nNumbers: ";

    while (!numbers.empty()) {
        cout << numbers.dequeue() << "  ";
    }

    numbers.~Buffer();

    return 0;
}
