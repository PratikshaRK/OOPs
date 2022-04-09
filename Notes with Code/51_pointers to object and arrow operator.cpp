#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void getdata()
    {
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }

    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;  // or Complex *ptr = new Complex;
    Complex *ptr = &c1;
    c1.setData(1, 54);  // or (*ptr).setData(1, 54); // or ptr->setData(1, 54)
    c1.getdata();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,4);    // -> arrow operator
    ptr1->getdata();


    return 0;
}