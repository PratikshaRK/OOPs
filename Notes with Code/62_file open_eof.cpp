#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("Sample_60.txt");
    out<<"This is me\n";
    out<<"This is me also\n";
    out<<"This is also me\n";
    out.close();

    ifstream in;
    string st,st2;
    in.open("Sample_60.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while(in.eof()==0){
        getline(in ,st); // getline present in string header
        cout<<st<<endl;
    }

    in.close();

    // eof means end of file
    return 0;
}