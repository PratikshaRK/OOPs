#include<iostream>
using namespace std;

/* 
Multiple:  A derived class with more than one base class.
Syntax:
Class DerivedC : visibility-mode base1, visibility-mode base2
{
    Class body of class "DerivedC"
}; 
*/

class Base1
{   
    protected:
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
    protected:
    int base2int;
    public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
// We can create Base3 class also, multiple: more than one

class Derived : public Base1, public Base2
{
    public:
    void show()
    {
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The sum of these value is "<< base1int + base2int <<endl;
    }
};

/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member Function:
    set_base1int() --> public
    set_base2int() --> public
    show() --> public
*/

int main(){
    // class is a templet to build objects 
    // function of any class will not autometically call
    
    Derived Pari;
    Pari.set_base1int(25);
    Pari.set_base2int(5);
    Pari.show();

    return 0;
}