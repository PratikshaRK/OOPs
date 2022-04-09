#include<iostream>
using namespace std;

int main(){
    //Array Example
    int marks[] = {23,45,56,89};
    //You can change the value of an array
    marks[2] = 455;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    int mathmarks[4];
    mathmarks[0] = 234;
    mathmarks[1] = 34;
    mathmarks[2] = 56;
    mathmarks[3] = 467;
    cout<<"These are math marks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    for (int  i = 0; i < 4; i++)
    {
        cout<<"The value of marks" <<i<<"  is  "<<marks[i]<<endl;
    }
    
    // Quick Quiz: do the same using while and do-while loops?

    cout<<"Printing array element by using while loop: "<<endl;
    int i=0;
    while (i<4)
    {
        cout<<"The value of marks "<< i<<"  is  "<<marks[i]<<endl;
        i++;
    }
    
    cout<<"Printing array element by using do-while loop: "<<endl;
    int j=0;
    do
    {
        cout<<"The value of marks "<< j<<"  is  "<<marks[j]<<endl;
        j++;
    } while (j<4);
    

    // *************************** Pointers and  array *************************
    int * p = marks;  // mark= it store address of first element

    cout<<"The value of *p is "<<*p<<endl; 
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl; 
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl; 
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 

    cout<<*(p++); // it print value 23 and increment p by 1
    cout<<endl;
    cout<<*(p);  //p is at marks[1]
    cout<<endl;
    cout<<*(++p); //it increment pointer and print value marks[2] that is 455
    return 0;
}