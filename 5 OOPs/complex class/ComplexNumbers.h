#include <iostream>
using namespace std;
class ComplexNumbers {
    // Complete this class
    
    private:
    int real;
    int imaginary;
    
    public:
    ComplexNumbers(int real, int imaginary)
    {
        this -> real = real;
        this -> imaginary = imaginary;
    }
    void print()
    {
        cout<<real<<" + i"<<imaginary<<endl;
    }
    void plus(ComplexNumbers const &c2)
    {
        real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }
    
    void multiply(ComplexNumbers const &c2)
    {
        int a = real;
        int b = imaginary;
        int c = c2.real;
        int d = c2.imaginary;
        real = (a*c) - (b*d);
        imaginary = (a*d) + (b*c);
    }    
};