#include<iostream>
using namespace std;

//*************************** Inline function ***************************

// int product(int a, int b)
// {
//     return a*b;
// }


// inline function expand in one line and compiler replace function calls into function code in compile time.
// and inline function save the time for coping argument ,evaluation, return , cout.
// inline function use only when function code is small 
// when function code is large and we use inline then catsh will be full/ more merory require.
// inline function not use when function contain: 1)recursion 2)static variable 3)loop ,switch
// inline is a one type of request to compiler

inline int product(int a, int b)
{
    return a*b;
}


// In function, all variable value will be destroy after execution except static variable it save the value 

// int product(int a, int b)
// {

//     static int c = 0;       // only one time initialize in function and this executes only one's   
//     c = c + 1;              //Next time this function ie run, the value of c will be retained/store ,next time value is 0+1=1, (c=1)
                             // first function call (c=1) // second call(c=2) // third call(c=3)........
//     return a*b+c;
// }

//************************************ Default arguments **********************
// caculate simple interest ,factor = rate
// Default argument : set default value for argument
// In functions , first write require arguments then write default argument ,if we write default argument first then we are not able to 
// call the function compiler give the error.
//default argu is in extrim right and compallsory arug is in left

float moneyReceived(int currentMoney, float factor=1.04)
{
    return currentMoney * factor;
}

//********************* Constant agrument ********************
//constant arug : argumet value is fix 
//value in *p is not able to change in function .
int strlen(const char *p)
{

}


int main(){
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    // product funtion call 10 times
    // actual parameter copied into formal parameter
    // then value is evaluate in function then return and then cout ,it is creating overhead/extra that's way we use inline function

    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 1000000;
    // we pass only one parameter to moneyReceived function beacause factor is default argument
    cout<<"If you have  "<<money<<"  Rs in your bank account,you will receive  "<<moneyReceived(money)<<" Rs after 1 year "<<endl;
    // also we can pass value for default argument (factor).
    cout<<"For VIP: If you have  "<<money<<"  Rs in your bank account,you will receive  "<<moneyReceived(money, 1.1)<<" Rs after 1 year ";

    return 0;
}