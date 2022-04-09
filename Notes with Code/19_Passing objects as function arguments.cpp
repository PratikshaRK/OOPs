#include<iostream>
using namespace std;

class complex
{   
    int a;
    int b;

    public:
        void setData(int v1, int v2)
        {
            a = v1;
            b = v2;
        }


        // obj1, obj2 are object of complex class , also we can take object of another class
        // function argument for setDataBySum is object of class
        void setDataBySum(complex obj1, complex obj2)
        {
            a = obj1.a + obj2.a;  // 1+3=4
            b = obj1.b + obj2.b;  // 2+4=6
        }

        void printNumber()
        {
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};


int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    // passing objects as function argument for setDataBySum 
    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}