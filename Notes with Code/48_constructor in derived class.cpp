#include<iostream>
using namespace std;
/*
first base class constructor is call, here A is base of class B
Case1: 
class B: public A{
    Order of exxcution of constructor -->first A() then B()
};

here we have tro base classes but first B is written then C that's way First B class constuctor is call
Case2:
class A: public B, public C{
    order of execution of constructor --> B() then C() and then A() 
};

here we have two base classes but one base class is virtual and we give more importance to virtual base class
Case3:
class A: public B, virtual public C{
    order of execution of constructor --> C() then B() and A()
};
*/

class Base1{
    int data1;
    public:
    Base1(int i){ //constructor
        data1 = i;
        cout<<"Base1 class constuctor called"<<endl;
    }
    
    void printDataBase1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};


class Base2
{
    int data2;
    public:
    Base2(int i){ //constructor
        data2 = i;
        cout<<"Base2 class constuctor called"<<endl;
    }
    
    void printDataBase2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Derived: public Base1, public Base2{ // here order of base classes is matter here
    int derived1, derived2; //private data members   // c and d is for Derived class
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b)  // derived class constructor is called where we initialize value of base1, base and derived1, derived2
        {
            derived1 = c; 
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        
        void printDataDerived(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};

int main(){
    Derived harry(1,2,3,4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}