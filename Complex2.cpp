
// C++ Program to Demonstrate
// Operator Overloading
// https://ide.geeksforgeeks.org/online-cpp-compiler

#include <iostream>
using namespace std;
 
class Complex {
private:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
 
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator-(Complex const& obj)
    {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }


    Complex operator*(const Complex& obj) const
    {
        Complex res;
        res.real = (real * obj.real) - (imag * obj.imag);
        res.imag = (real * obj.imag) + (imag * obj.real);
        return res;
    }
    Complex operator/(const Complex& obj) const
    {
        Complex res;
        res.real = (real * obj.real) - (imag * obj.imag);
        res.imag = (real * obj.imag) + (imag * obj.real);
        return res;
    }


    void print() { cout << real << " + " << imag << "i" <<  '\n'; }
};
 
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2; 
    Complex c5 = c1 * c2;
    c3.print();
    c4.print();
    c5.print();
}
