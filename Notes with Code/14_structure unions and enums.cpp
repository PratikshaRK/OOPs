#include<iostream>
using namespace std;


typedef struct employee      //using typedef we create shortcut for struct employee as ep
{
    /* data */
    int eID;       //4 byte
    char favChar;  // 1 byte 
    float salary;  // 4 byte,  total = 9 byte
} ep ;

union money                // it is exchange policy means we exchange money as rice or money as car ...
{
    /* data */
    int rice; //4
    char car; //1
    float pounds;  //4        // at a time only one value(rice,car,pounds) can be use 

    // union use only 4 byte in total ,memory is shareble (beacause at a time only one )
};





int main(){

    // ************************ Structure *************************
    ep pari;  // it is same as: struct employee pari;
    struct employee shubham;
    struct employee rohandhas; // pari ,shubham, rohandhas is structure variable of employee
    pari.eID = 1;
    pari.favChar = 's';
    pari.salary = 50000;

    cout<<"****** Structure ******"<<endl;
    cout<<"The value is "<<pari.eID<<endl;
    cout<<"The value is "<<pari.favChar<<endl;
    cout<<"The value is "<<pari.salary<<endl<<endl;

    // ********************** Union **************************
    // union is same as stucture but it provide better memory management
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<"****** Union ******"<<endl;
    cout<<m1.rice<<endl; // it print garbeg value beacause money value is override by car value
    cout<<m1.car<<endl<<endl;

    // ************************ Enum ****************************
    enum Meal{breakfast,lunch,dinner}; //it provide interger value from 0
    cout<<"****** Enum ******"<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    // here meal is a datatype
    Meal m2 = breakfast;
    cout<<m2<<endl;
    cout<<(m2==0); //it return true means 1
    return 0;
}