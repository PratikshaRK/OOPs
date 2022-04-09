#include<iostream>
using namespace std;

// recursion is use in case of iterative
// base on program use iteration or recursion
int factorial(int n)
{
    if(n <= 1)
    {
        // 0! = 1! = 1
        return 1;
    }

    return n * factorial(n-1);
}

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 factorial(1); 
// factorial(4) = 4 * 3 * 2 * 1; 
// factorial(4) = 24;

int fib(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// 1 1 2 3 5 8 13 21 34 55 89
// base condition: position 0 and 1: 1 value

// Step by step calculation of fib(5)
// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

// Recursion overhead : we call same function again and again fib(2), fib(3)


int main(){
    
    // Recursion function: function call itself repitedely untill it meet to base condition.
    // Factorial  of a number: 
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!

    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;

    // cout<<"The Factorial of "<<a <<" is " << factorial(a)<< endl;
    cout<<"The term in fibonacci sequence at position "<<a <<" is " << fib(a)<< endl;

    return 0;
}