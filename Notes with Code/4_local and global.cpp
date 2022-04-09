#include<iostream>

using namespace std;

int glo = 6;
void sum()
{
    int a;
    cout<<glo; //print 6 because glo is not locally declare
}

int main()
{
    int glo=9;
    glo=78;
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c = 'd';
    bool d = true;

    sum();
    cout<<glo<<d; //print 78 because glo locally avaleble and bool=true means it print 1.

    // cout<<"Here the value of a is "<<a<<".\nThe value of b is "<<b;
    // cout<<"\nThe value of pi is "<<pi;
    // cout<<"\nThe value of c is "<<c;
    return 0;
}