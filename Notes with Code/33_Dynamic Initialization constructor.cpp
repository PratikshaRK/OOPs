#include <iostream>
using namespace std;

// object dynamically initialization during constructor overloading.
// Dynamically means in runtime
// Depending on the user input constructor will work

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    // interest rate can be calculate by using two ways 1)percentage 2)fraction
    // we use fraction 0.04 here

    BankDeposit() {}                    // This is require beacause if we don't give value, that time also object can create
    BankDeposit(int p, int y, float r); // r can be a value like 0.04 (fraction)
    BankDeposit(int p, int y, int r);   // r can be a value like 14 (percentage)
    // member function show
    void show();
};

// Constructor is define outside
BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposit :: show()
{
    cout<<endl<<"Principal amount was "<<principal
        <<". Return value after "<<years
        <<" years is "<<returnValue<<endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;  // blank object is create
    int p, y;
    float r;  // fraction
    int R;   //percentage

    bd3.show();
    cout<<"Enter the value of p, y and r: " <<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);  // object is initialize dynamically from user data
    bd1.show();

    cout<<"Enter the value of p, y and R: " <<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);  // object is initialize dynamically from user data
    bd2.show();

    return 0;
}