#include<iostream>
using namespace std;

int main()
{
    /* Loops in C++:
    There are three type of loops in C++:
        1. For loop
        2. While loop
        3. do-While loop
    */

    /* For loop in C++: */
    // int i = 1;
    // cout<<i;
    // i++;

    // Syntax for For loop:
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

     /* While loop in C++: */
    // Syntax:
    // while(condition)
    // {
    //     statements;
    // }

    // int i=1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // //Example of infinite while loop
    // int i=1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    /* do-While loop in C++: */
    // Syntax:
    // do 
    // {
    //     statements;
    // } while(condition);

    int i=1;
    do  {
        cout<<i<<endl;
        i++;
    } while (i<=40);
    
    // //Example of infinite while loop
    // int i=1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    return 0;
}