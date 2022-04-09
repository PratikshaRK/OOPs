#include <iostream>
using namespace std;

class Base
{
// protected can inherited but can't use outside the class(main)
protected: // data member is private but we can inherite/use in child class
    int a;

private: // data member is private but we can't inherite in child class
    int b;
};

/* For a protected members: (derivation mean here visibility modes)
                                Public Derivation    Private Derivation    Protected Derivation
    1. Private members          Not inherited        Not inherited         Not inherited
    2. Protected members        Protected            Private               Protected
    3. Public members           Public               Private               Protected
*/

class Derived : protected Base
{
    
};


int main()
{
    Base b;
    Derived  d;
    // cout<<d.a; // will not work since a is protected in both base as well as derived class 
    return 0;
}