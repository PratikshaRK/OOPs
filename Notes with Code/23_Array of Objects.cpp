#include <iostream>
using namespace std;

class Employee
{
    int id, salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee: " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{

    // Employee harry, rohan, lovish, pari;
    // harry.setId();
    // harry.getId();

    // creating array of objects
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    
    return 0;
}