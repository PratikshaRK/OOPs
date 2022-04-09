#include <iostream>
using namespace std;

// copy constructor: it make copy of another constructor 
// compiler provide default copy constructor to every class
// if we not write code for copy constructor and we 

class Number
{
    int a;

public:
    // default constructor
    Number(){
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor

    Number(Number &obj) // passing reference of an object and x of a value is pass to a value of z1
    {
        cout<<"copy constructor is called!!!"<<endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

   // z1 should exactly resemble/ same as z or x or y
   Number z1(x);  // copy constructor invoked
   z1.display();
   // z1 should exactly remember z or x or y

   z2 = z;  // copy constructor not called because object is already created and we are initializig only
   z2.display();

   Number z3 = z;  // copy constructor involed
   z3.display();
    return 0;
}