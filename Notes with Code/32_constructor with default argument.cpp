#include<iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8)  // b and c is default argument  and this is constructor with default arguments
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();
};

void Simple :: printData()
    {
        cout<<"The value of data1, data2 and data3 is "<<data1<<" , "<<data2<<" and "<<data3<<endl;
    }

int main(){
    Simple s1(1, 4, 5);
    s1.printData();

    Simple s2(1, 3); // when we not give the value for c then default value 8 is use
    s2.printData();

    Simple s3(2); // when we not give the value for b and c then default valueis 9 and  8 is use
    s3.printData();
    return 0;
}