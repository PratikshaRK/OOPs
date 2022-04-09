
// class : we are creating a one type of datatype.
// previous name of c++ is c with classes. 
// POP: mainly focus on function and OOP: mainly focus on flow of data
// when class will create memory is not allocate for variable, memory allocate for variables when object is created.  

// Objects: using classes templetes we create run time entities.
// Encapsulation: puting data and function into a single unit/entities/class.
// Abstraction: sepration of concern. we have different leyers and each layer don't know what is in another layer.
// Inheritance: we create new templete using exiting template. reusabilyty 


#include<iostream>
using namespace std;


class Employee
{
    private:
        // only function can access this data
        int a, b, c;

    public:
        int d, e;
        void setData(int x, int y, int z);  // setData function declaration
        void getData()
        {
            cout<<"The value of a is  "<<a<<endl;
            cout<<"The value of b is  "<<b<<endl;
            cout<<"The value of c is  "<<c<<endl;
            cout<<"The value of d is  "<<d<<endl;
            cout<<"The value of e is  "<<e<<endl;
        }
};

// setData function defination
void Employee :: setData(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}


int main(){
    
    // Disadvantage of stucture: 1) Data hiding not exist(we can access any value of structure from anywhere in the program)
    // 2) we can't add functions in structure. class is best way to use function.
   //  when structure is use: 1)only data hold  2)security not matter/consert
   //  When class is use: 1) data with function and security.
   // by default variable in structure is public

    Employee pari;     //object created of class employee
    // pari.a = 135;  //---> this will throw error as a is private(object can't access private variable, only functions can access private variable)
    pari.d = 34;      // ---> d and e is public variable that can access by object 
    pari.e = 89;  
    pari.setData(2,3,4);
    pari.getData();

    return 0;
}