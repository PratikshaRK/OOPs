#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructure
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is autometically invoked /run whenever an object is created
    // constructor return type is not matter/important.
    // Default constructor: The constructor which does not take any parameter
    // Parameterise constructor: The constructor which take parameters.
    // Constructor run automatically beacause it name is same as class name.

    Complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// constructor define
Complex ::Complex(void) // ------> This is a default constructure as it accepts no parameter
{
    // set value of objects
    a = 10;
    b = 20;
    // cout<<"Hello world"<<endl; 
}

int main()
{

    //Constructor: we are setting values to objects(initialize class when it create)
    // Classes: is costem datatype

    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/*  Characteristics of Constructors:

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments like factor=1.04
5. We cannot refer to their address.

*/
