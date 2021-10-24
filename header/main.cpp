#include <iostream>
#include "Complex.h"

using namespace std;

int main(int argc, char* argv[]) {
    ComplexNumber a(1.5, -2.0);
    ComplexNumber b(2.5, 3.75);
    
    cout << "a            " << a << "\n";
    cout << "b            " << b << "\n";
    
    cout << "a conjugate  " << a.con() << "\n";
    cout << "a reciprocal " << a.rec() << "\n";
    
    ComplexNumber c = a.add(b);

    cout << "a+b          " << c << "\n";

    ComplexNumber d = b.sub(a);

    cout << "b-a          " << d << "\n";

    ComplexNumber e = a.mul(b);

    cout << "a*b          " << e << "\n";

    ComplexNumber f = a.div(b);

    cout << "a/b          " << f << "\n";
        
    return 0;
}