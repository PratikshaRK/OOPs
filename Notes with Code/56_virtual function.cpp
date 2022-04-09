#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_Base = 1;
    virtual void display()
    {
        cout << "Displaying Base class variable var_base " << var_Base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_Base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *Base_class_pointer;
    BaseClass obj_base;       // base class object
    DerivedClass obj_derived; // derived class object

    Base_class_pointer = &obj_derived; // type of pointer is baseclass and it pointing to derived class. here display function is call of baseclass
    Base_class_pointer->display();

    /* Virtual function : now if want to accress/call display function of derived class then we use virtual function with baseclass pointer.
    using virtual keyword before method name.

    virtual function override deafault behaviour.
    Polymorphism: it is a property where object of different classes are respond on same message(dispaly)
    */

    return 0;
}