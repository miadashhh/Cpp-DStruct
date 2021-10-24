#include <sstream>
#include "Complex.h"


ComplexNumber::ComplexNumber(double r) {  // we construct a real comples
    real = r;
    imag = 0.0;    
}

ComplexNumber::ComplexNumber(double r, double i) {  // we construct a complex w real and imaginary parts
    real = r;
    imag = i;    
}
      
ComplexNumber ComplexNumber::add(ComplexNumber n) {  // we add a complex number n (that we pass) onto the complex we have constructed previously
    ComplexNumber Add(real, imag);
    Add.real = real + n.real;
    Add.imag = imag + n.imag; 
    return Add;
    // returns the instance plus number n
}
    
ComplexNumber ComplexNumber::sub(ComplexNumber n) {
    ComplexNumber Sub(real, imag);
    Sub.real = real - n.real;
    Sub.imag = imag - n.imag;
    return Sub;
    // returns the instance minus the number n
}   

ComplexNumber ComplexNumber::con() {
    // returns the instance conjugate
    ComplexNumber Con(real, imag);
    Con.real = real;
    Con.imag = -imag;
    return Con;
}
    
ComplexNumber ComplexNumber::rec() {
    ComplexNumber n(real, imag);

     return n.con() / ( n.real^2 + n.imag^2);
    // returns the instance reciprocal
}

ComplexNumber ComplexNumber::mul(ComplexNumber n) {
    ComplexNumber Mul(real, imag);
    Mul.real = real*n.real - imag*n.imag;
    Mul.imag = real*n.imag - imag*n.real;
    // returns the instance multiplied by number n
    return Mul;
} 
    
ComplexNumber ComplexNumber::div(ComplexNumber n) {
    ComplexNumber Div(real, imag);
    Div.real = (real*n.real + imag*n.imag)/(n.real*n.real + n.imag*c.imag);
    Div.imag = (imag*n.real + real*n.imag)/(n.real*n.real + n.imag*c.imag);
    return Div;
    // returns the instance divided by number n
} 
   
std::ostream & operator << (std::ostream &stream, const ComplexNumber &n) {
    stream << n.real;
    
    if (n.imag != 0.0) {
        stream << ((n.imag) >= 0.0 ? " + " : " - ");
        
        if (abs(n.imag) != 1.0)
            stream << abs(n.imag);
           
        stream << "i";
    }
    
    return stream;
}