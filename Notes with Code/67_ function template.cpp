#include<iostream>
using namespace std;

float funcAverage(int a, int b){
    float avg = (a+b)/2.0;
    return avg;
}

float funcAverage2(int a, float b){
    float avg = (a+b)/2.0;
    return avg;
}
// use fucntion template if you want to use the different datatype of arguments
template <class T1, class T2>
float funcAverage3(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    a = funcAverage3(5,2.4);
    printf("The average of these numbers is %.3f", a); // cout

    int x=5, y=7;
    swapp(x,y);
    cout<<x<<endl;
    cout<<y;
    return 0;
}