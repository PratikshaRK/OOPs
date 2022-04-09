#include <iostream>
using namespace std;
// Simple example of friend function

// Forward declaration
class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    // Compiler don't know about Y till now , that's way we need to tell compiler y is define in upcoming code to do this use forward declaration
    friend void add(X, Y);
};


class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }

    friend void add(X, Y);
};


void add(X obj1, Y obj2)
{
    cout << "Summing data of X and Y objects gives me " << obj1.data + obj2.num << endl;
}


int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(5);

    add(a1, b1);

    return 0;
}