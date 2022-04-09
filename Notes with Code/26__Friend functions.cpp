#include<iostream>
using namespace std;

// Sum of complex number
// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i

class Complex
{
    int a, b;
    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        // friend function give access of private data member/variable to the function(sumComplex)
        friend Complex sumcomplex(Complex obj1, Complex obj2);

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

// creating sumcomplex function which return complex 
// This sumComplex function is not member function of class Complex 
Complex sumcomplex(Complex obj1, Complex obj2)
{
    // cout<<a;   //it is not mining anything beacause (a means kisaka a, obj1 ka ki obj2 ka)
    Complex obj3;
    obj3.setNumber((obj1.a + obj2.a), (obj2.b + obj2.b));
    return obj3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}


/* Properties of friend functions:
1. Not in the scope of class (this friend function is not part of class)
2. Since it is not in the scope of the class , it cannot be called from the object of the class.
    c1.sumComplex() ---> Invalid
3. Can be invoked/call without the help of any object
4. usually contains the objects as arguments
5. Can be declared inside public or private section of the class.
6. It cannot access the members directly by the in mames and need object_name.member_name to access any member.

*/