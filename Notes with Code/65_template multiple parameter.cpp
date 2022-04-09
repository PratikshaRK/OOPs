#include <iostream>
using namespace std;

/*
Sytax of multiple parameter(comma separated) in template:
template <class T1, class T2>
class nameofclass{
    body
}
*/

// we can suppaly class in T
template <class T1, class T2> // here we tell the compiler we will specify datatype later in the time of object creation
class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a,T2 b){ // constructor 
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 <<endl<< this->data2;
    }
};

int main()
{
    myClass <int,char> obj(1,'c');
    obj.display();
    return 0;
}