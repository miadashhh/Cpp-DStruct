#pragma once

class ComplexNumber {

public:
    
    // the constructor function is overloaded
    
    ComplexNumber(double r);  // this constructs an instance of complex class without the imaginary part 
    ComplexNumber(double r, double i);  // this constructs an instance of the complex class with both imag and real part
     
    // instance functions: arithmetic operations
    
    ComplexNumber add(ComplexNumber n);    
    ComplexNumber sub(ComplexNumber n);
    ComplexNumber con();
    ComplexNumber rec();
    ComplexNumber mul(ComplexNumber n);     
    ComplexNumber div(ComplexNumber n); 
    
    // the output stream operator << is overloaded to print complex numbers

    // friend std::ostream & operator << (std::ostream &stream, const ComplexNumber &n);
    
private:
    
    double real, imag;
};