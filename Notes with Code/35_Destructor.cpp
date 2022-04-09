#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout <<"This is the time when constructor is called for object number"<<count<<endl;
    }

    ~num()  // destructor create
    {
        cout<<"This is the time when my destructor is called for object number "<<count<<endl;
        count--; 
    }
};

int main()
{
    // Destructor never takes an arguments nor does it return any value
    // autometically call by compiler to clean up storege
    // Destructor : we are removing memory that are created dynamically when object was created

    cout<<"we are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Enterring this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }

    cout<<"Back to main"<<endl;

    return 0;
}