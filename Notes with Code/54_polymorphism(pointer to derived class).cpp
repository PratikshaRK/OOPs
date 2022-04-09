#include <iostream>
using namespace std;
// late binding: here we dicide which display funciton is run in runtime according to the pointer type

class BaseClass
{
public:
    int var_Base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_Base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_Base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    /* Polymorphism:
    - one name  and multiple forms
    -eg. function overloading , operator overloading
    -eg.virtual functions

    Polymorphism in C++ can be of two types:
    1.Compile time polymorphism
        compile time polymorphism in c++ is acheived using:
        1.1 Function overloading
        1.2 Operator overloading
    2.Run time polymorphism
        run time polymorphism in c++ achieved using:
        2.1 virtual functions
    */

    BaseClass *Base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    // base class ka pointer hai but vo point out kar raha hai derived class ko
    // base class pointer can point to the object of derived class
    Base_class_pointer = &obj_derived;

    Base_class_pointer->var_Base = 30;
    // object is of derived class, but pointer is of base class.we are called a method same function name we pointer
    // 
    // Base_class_pointer->var_derived= 134; // will throw an error
    Base_class_pointer->display();

    DerivedClass * derived_class_pointer;  // derived class pointer
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}