#include<iostream>
using namespace std;

/*  function prototype: if we define function after main then we need to tell the compiler first 
that we use the function in later program that way we use prototype.if we define function before main then we do not 
need function prototype.Function prototype give asuraty for compiler that function is define in program */

//first, function prototype introduce in c++, the in c language.
// Some time actual and formal parameter name is same.
//function prototype is one kind on templete.

//Syntax for function prototype: type function_name (arguments);
// int sum(int a,int b); // --->Acceptable
// int sum(int a, b);   // --->Not Acceptable
int sum(int, int);      // --->Acceptable
void g(void);           // --->Acceptable        //this function not taking any input and not returning any output/value.
void g();               // --->Acceptable        // void is optional in c++



int main(){
    
    // function is main part of top down structure programming
    // Functions: divide program into pieces and do one's and use forever

    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;

    // num1 and num2 are actual parameter
    cout<<"The sum is: "<<sum(num1, num2);
    g(); // g function not taking any inputs

    return 0;     // return 0 means program successfully execute 
}



int sum(int a, int b)
{
    // Formal parameter a and b will be taking values from actual parameters num1 and num2.
    // formal parameter use only in function.
    int c = a+b;
    return c; //c is a return value function key
}


// Q.1) it is necessary a function always return value?
// ans: No

void g()
{
    cout<<"\nHello ,good morning";
}
