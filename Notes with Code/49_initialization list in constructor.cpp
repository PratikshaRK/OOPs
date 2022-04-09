#include <iostream>
using namespace std;
/*
Syntax for initialization list in Constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}
*/

class Test
{
    int a;
    int b;

public:
    //Test(int i, int j) : a(i), b(j)         // here we initializing a and b with i and j
    //Test(int i, int j) : a(i), b(i+j)         // here we initializing a and b with i and j and value of j calculated first(10)
    //Test(int i, int j) : a(i), b(2 * j)         
    //Test(int i, int j) : a(i), b(a + j)         
    //Test(int i, int j) : b(j), a(i+b)         //here we get garbej value beacause first i have declare a and then b but first i initialize b and then a
    Test(int i, int j): a(i)
    { //or we can intialize a and b in constructor body
        b = j;
        cout << "Constructor executed" << endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4,6);
    return 0;
}