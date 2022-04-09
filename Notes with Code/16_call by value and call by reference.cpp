#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c = a + b;
    return c;
}

//This will bot swap a and b
// Call by value
// a and b or formal parameter destroy after function excution
void swap(int a, int b)
{                       // temp  a   b
    int temp = a;       // 4     4   5
    a = b;              // 4     5   5
    b = temp;          //  4     5   4
}

//Call by reference using pointers
// addresses of a and b will be destroy after function excutiont
void swapPointer(int* a, int* b)
{                       // temp  a   b
    int temp = *a;       // 4     4   5
    *a = *b;              // 4     5   5
    *b = temp;          //  4     5   4
}

//Call by reference using C++ reference variable
// here &a and &b are reference variable means is pointing x and y.
// int & means return reference variable and it is reference variable of x. 

// int &
void swapReferenceVar(int &a, int &b)
{                       // temp  a   b
    int temp = a;       // 4     4   5
    a = b;              // 4     5   5
    b = temp;          //  4     5   4
    // return a;
}

int main(){

    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5);
    cout<<"Value of x and y before swaping:"<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    // swap(x, y);  // actual parameter pass the copy of the value to formal parameter.that's way swaping is not perform beacause value 
                    // is swap in between a and b and x and y is remain same as previous. 

    // swapPointer(&x, &y);   // This will swap a and b using pointer reference.
    swapReferenceVar(x, y);   // This will swap a and b using reference variable.

    cout<<"\nValue of x and y after swaping:"<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    // swapReferenceVar(x,y) = 766;
    // cout<<"\nValue of x and y of reference :"<<endl;
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}