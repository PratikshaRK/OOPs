#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // We can have multiple constructor in a class
    // This is example of constructor overloading
    //  Function overloading and constructor overloading are similary same.
    // Here we have three constructor and base upon the argument matches the constructor are called/run/invoked.
    

    Complex(){ // default
        a = 0;
        b = 0;
    }

    Complex(int x, int y)  // parameterized with 2 arguments
    {
        a = x;
        b = y;
    }

    Complex(int x)   // parameterized with 1 argument
    {
        a = x;
        b = 0;
    }
    

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};


int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);  // b is by default 0
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}