#include<iostream>
using namespace std;

// inheritance contain member function and data member of parent class additionally we can create more data menbers and function in child class
// we have multiple base and derived classes in program

// Base Class
class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee(){}  // when we create derived class  that time defalut constructor of base class autometically call
};

// Derived Class
/* Syntax:
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note:
1. Visibility mode: 1) public 2) private 3)protected ...
2. Public: public members of the  base class becomes Public members of  the derived class
3. Private: public members of the base class becomes Private member of derived class
4. Default visibility mode is private
5. We can't access private members of the base class or Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : Employee
{
    public:
    Programmer(int inpID)
    {
        id = inpID;
    }
    int languageCode = 9;
    void getData()
    {
        cout<<id<<endl;
    }
};


int main(){
    Employee pari(1), rohan(2);
    cout<<pari.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer skiilIF(10); // id is private member  // make private id as public is in above code
    cout<<skiilIF.languageCode<<endl;
    // cout<<skiilIF.id<<endl; // id is private member of programmer class beacause visibility mode is private and we can't access private members
    skiilIF.getData();
    return 0;
}