
// There are two types of header files:
// 1) System header files: It comes with the compiler
#include<iostream>
// 2) User defined header files: It is written by the programmer 

// #include "this.h" // --> This will produce an error if this.h is not present in the current directory

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of Arithmatic operators in C++"<<endl;
    
    //Arithmatic Operators
    cout<<"The value of a + b is " << a+b << endl;
    cout<<"The value of a - b is " << a-b << endl;
    cout<<"The value of a * b is " << a*b << endl;
    cout<<"The value of a / b is " << a/b << endl;
    cout<<"The value of a % b is " << a%b << endl;  // division of two integer give integer value in output
    cout<<"The value of a++ is " << a++ << endl;  //a=5
    cout<<a<<endl;
    cout<<"The value of a-- is " << a-- << endl;  //a=4
    cout<<"The value of ++a is " << ++a << endl; //a=5
    cout<<"The value of --a is " << --a << endl<<endl;
    


    // Assignment Operators -->used to assign values to variables
    // int a=3,b=9;
    // char d='d';

    // Comparison Operators
    cout<<"Following are the types of Comparison operators in C++"<<endl;
    cout<<"The value of a == b is " << (a==b) << endl;
    cout<<"The value of a != b is " << (a!=b) << endl;
    cout<<"The value of a < b is " << (a<b) << endl;
    cout<<"The value of a > b is " << (a>b) << endl;
    cout<<"The value of a <= b is " << (a<=b) << endl;
    cout<<"The value of a >= b is " << (a>=b) << endl<<endl;

      // Logical Operators
    cout<<"Following are the types of Logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is " << ((a==b) && (a<b)) << endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is " << ((a==b) || (a<b)) << endl;
    cout<<"The value of this logical not operator (!(a==b)) is " << (!(a==b)) << endl;

    return 0;
}