#include<iostream>
using namespace std;

int sum(int a, int b)
{
    // if formal parameter argument is float but if actual paramter is int then it covert into float.
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}


// calulate the volume of a cylinder
int volume(double r, int h)
{
    // volume of cylinder: 3.14 * r^2 * h
    return(3.14 * r * r * h);
}

// calulate the volume of a cube
int volume(int a)
{
    // volume of cube: a^3
    return(a * a * a);
}

// calulate the volume of a rectangular
int volume(int l, int b, int h)
{
    // volume of rectangular: l*b*h
    return(l * b * h);
}


int main(){
    // Function overloading means, same thing are use for multiple works.
    // here sum function use for multiple works and it is function overloading.
    cout<<"The sum of 3 and 6 is "<< sum(3,6) <<endl;
    cout<<"The sum of 3,7 and 6 is "<< sum(3,7,6) <<endl;
    cout<<"The volume of cuboid 3,7 and 6 is "<< volume(3, 7, 6) <<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<< volume(3, 6) <<endl;
    cout<<"The volume of cube of side 3 is "<< volume(3) <<endl;

    return 0;
}