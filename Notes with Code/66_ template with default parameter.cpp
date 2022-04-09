#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Harry
{
public:
    T1  a; // or
    T2  b;

    Harry(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Harry<> h(4, 6.4); // default datatype is int and float
    h.display();
    cout<<endl;
    
    Harry<float,char> g(4.4, 'c'); // we specify default datatype(int float) as float and char
    g.display();
    return 0;
}