#include <iostream>
using namespace std;

// Q.1) How to preserve/store number of employee?
// Ans: static variable

//if we not make count as static then the memory of count is different for every objects and we can't store the number of employee
// static variable is also called class variable in oops.

class Employee
{
    int id;
    static int count; // static variable by default initialize with 0

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    //static member function alwage use only static data member and member function.
    // and function run with class name not by object.

    static void getCount(void)
    {
        // cout<<id; // throws an error beacause id is not static variable
        cout<<"The value of count is: "<<count<<endl;
    }

};


int Employee ::count; // the memory of this count variable is common beacause it is static
// int Employee :: count=1000; // if i want to change by default value of count


int main()
{
    // Count is the static data member of class employee and it is common for all objects
    Employee pari, raj, lovish;
    // pari.id = 1;
    // pari.count = 1;     // cannot do this as id and count are private

    pari.setData();
    pari.getData();
    // static member function access by using class name directally
    Employee :: getCount();

    raj.setData();
    raj.getData();
    Employee :: getCount();

    lovish.setData();
    lovish.getData();
    Employee ::getCount();
    
    return 0;
}