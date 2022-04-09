
/* Ambiguity: when we have three classes and in that classes we have
functions (grid) with same name now we are trying to inherited new class
using this three classes . if i want to use the function now from
which class we derived/use  that function */
#include <iostream>
using namespace std;

// Ambiguity 1
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
    void greet() // ambiguity resolution here we specify which greet function need to use 
    {
        Base1::greet();
    }
};

// Ambiguity 2: we have same method define in both classes then derived class 
// use method of over class and override base class method
// It is resolve autometically

class B{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
    void say(){
        cout<<"Hello my beatifull people"<<endl;
    }
};

int main()
{
    // Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;

    base1obj.greet();
    base2obj.greet();

    Derived d;  // ambiguity beacause we have greet function in both base classes
    d.greet();

    // Ambiguity 2
    B b;
    b.say();

    D e;
    e.say();

    return 0;
}