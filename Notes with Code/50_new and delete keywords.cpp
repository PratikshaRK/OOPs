#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a; // pointer is *ptr

    // *(ptr) = we are dereferencing means we are taking value from address
    cout<<"The value of a is "<<*(ptr)<<endl;

    // New operator/keyword :here we create int/float dynamically and initialize the any value  
    //int *p = new int(40);
    float *p = new float(40.78);
    cout<<"The value at address p is "<<*(p)<<endl;

    // allocate block/array of memory dynamically
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;  // or *(arr+1) = 20
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // Delete operator/ keyword
    delete[] arr; //the array is now free and we can insert new values

    return 0;
}