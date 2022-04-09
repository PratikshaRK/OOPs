#include <iostream>
using namespace std;

int c = 45;

int main()
{
    // ********** Build in Data types **************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c; // Scope resolution operator is used for global values 


    // ********************* Float , double and long double Literals *************************
    // float d = 34.4f;
    // long double e = 34.4l; // 34.4 by default it is double and 34.4f it it float and 34.4l it is long double
    //                       // This f,l or F,L are sufics
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl<<endl;
    // cout<<"The value of d is "<<d << endl <<"The value of e is "<<e;


    // ********************* Reference Variables *************************
    // Same variable/ person call by multiple names
    // Rohan Das ---> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x;  // y is reference variable that take reference from x
    // cout<<x<<endl;
    // cout<<y<<endl;

    // ************************** Typecasting ************************
    int a = 45;
    cout<<"The value of a is "<< a <<endl;
    cout<<"The value of a is "<< (float)a <<endl;
    // or
    cout<<"The value of a is "<< float(a) <<endl;

    float b = 45.46;
    cout<<"The value of b is "<< b <<endl;
    cout<<"The value of b is "<< (int)b <<endl;
    // or
    cout<<"The value of b is "<< int(b) <<endl;

    int c = int(b);

    cout<<"The Expression is "<< a + b <<endl;
    cout<<"The Expression is "<< a + int(b) <<endl;
    cout<<"The Expression is "<< a + (int)b <<endl;



    return 0;
}