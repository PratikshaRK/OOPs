#include<iostream>
#include<fstream>
using namespace std;
/* 
The useful classes for working with files in C++ are:
1.fstreambase
2.ifstream --> derived from fstreambase
3.ofstream --> derived from fstreambase
*/

// In order to work with files in c++,you will have to open it, primarily , there are two  ways to open a file:
// 1. using the constructor
// 2. using the member function open() of the class


int main(){
    string st=" Harry bhai";
    // opening files using constructor and writing it
    ofstream out("Sample_60.txt"); // write operation, out is a object of ofstream class.
    out<<st; // st ka data file me dal do
    
    string st2;
    // opening files using constructor and reading it
    ifstream in("Sample_60 b.txt"); // write operation, out is a object of ofstream class.
    // in>>st2; // sample 60 b file ka st2 me dal do (only one word is inset in st2)
    getline(in, st2);
    cout<<st2;
    
    return 0;
}