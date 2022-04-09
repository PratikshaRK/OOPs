#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("Sample_60.txt");

    // Creating a name string and filling it with the string entered by the user
    cout<<"Enter your name: "<<endl;
    string name;
    cin>>name;

    // writing a string to the file
    hout<<"My name is "+name;
    hout.close();

    ifstream hin("Sample_60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    hin.close();
    return 0;
}