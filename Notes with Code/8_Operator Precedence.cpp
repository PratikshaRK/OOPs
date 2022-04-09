#include<iostream>
#include<iomanip> //use for setw
using namespace std;

int main()
{
    // int a = 34;
    // cout<<"The value of a was: "<< a<<endl; 
    // a = 45;
    // cout<<"The value of a is: "<< a<<endl;    
    
    // *********************** Constants in C++ ******************************
    // const int a = 3;     
    // cout<<"The value of a was: "<< a<<endl; 
    // a = 45; //not posible because a is constant
    // cout<<"The value of a is: "<< a<<endl;    

    // ************************* Manipulators in C++ ****************************
    // 1)endl 2)setw = It help to set field width
    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is: "<< a <<endl;
    // cout<<"The value of b without setw is: "<< b <<endl;
    // cout<<"The value of c without setw is: "<< c <<endl<<endl;

    // cout<<"The value of a with setw is: "<< setw(4) << a <<endl;
    // cout<<"The value of b with setw is: "<< setw(4) << b <<endl;
    // cout<<"The value of c with setw is: "<< setw(4) << c <<endl;

    // ******************************* Operator Precedence **************************
    int a = 3, b = 4;
    // int c = (a*5)+b;  //PEMDAS ,if operator precedence is same then use associativity 
    int c = ((((a*5) + b) - 45) + 85);
    cout<<c;
    return 0;
}