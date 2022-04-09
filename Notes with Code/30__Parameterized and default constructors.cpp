#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ------> This is a parameterized constructure as it takes 2 parameters
{
    // set value of objects
    a = x;
    b = y;
}


int main(){
    // Two types to set value of objects:
    // 1. Implicit call
    Complex a(4, 6);
    a.printNumber();

    // 2. Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();  // a and b are objects of complex class

    return 0;
}