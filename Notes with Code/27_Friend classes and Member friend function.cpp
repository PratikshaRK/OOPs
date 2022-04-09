#include <iostream>
using namespace std;

// Forward declaration: we are taling to compiler that , this complex class will present in upcoming program.
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex); //do not define function here beacause till now function don't know about obj1 and obj2
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // here we give the permission to calculator class , that he can use comple class private variable
    // function of another class use private data of another class.

    //Individually declaring functions as friends.
    // friend int Calculator ::sumRealComplex(Complex obj1, Complex obj2);
    // friend int Calculator ::sumCompComplex(Complex obj1, Complex obj2);

    // here i use two friend function but if i want to use multiple friend functions then i use friend class.
    // Friend class: Means all functions of friend class can access private data of that class(complex)

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;


public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};



int Calculator ::sumRealComplex(Complex obj1, Complex obj2)
{
    return (obj1.a + obj2.a);
}


int Calculator ::sumCompComplex(Complex obj1, Complex obj2)
{
    return (obj1.b + obj2.b);
}



int main()
{
    Complex obj1, obj2;
    obj1.setNumber(1, 4);
    obj2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sumRealComplex(obj1, obj2);
    cout<<"The sum of real part of obj1 and obj2 is "<<res<<endl;

    int resc = calc.sumCompComplex(obj1, obj2);
    cout<<"The sum of Complex part of obj1 and obj2 is "<<resc;

    return 0;
}