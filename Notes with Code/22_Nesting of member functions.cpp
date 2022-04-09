//OOPs - Classes and objects

// C++ --->initially called ---> C with classes by stroustroup
// class ---> extension of structures(in c language)
// Structures had limitations:
//      - members are public
//      - no methods

// classes ---> structures + more
// Classes ---> can have methods and properties
// classes ---> can make few members as private & few as public
// sturctures in C++ are typedefed(we can create short name using only stuctures)
// You can declare objects along with the class declaration (not recommendent):
    /* class Employee{
             // class definition
        } harry, pari, raj;  */

// harry.salary = 8; makes no sence if salary is private
// private variable not override
// if we declare some member function as private then we can't access it from outside / with object , 
// only another member function can access that data member/ member function. 

//***************** Nesting of member function ****************
// we can call a function within another function without dot(.)


#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // by default it is private

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number:  " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        // s.at() means position of character in string
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incurrect binary formate" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin(); // nesting of member function (we are calling chk_bin() without using dot operator)
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else{
                s.at(i) = '0';
            }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    // driver program
    binary b;
    b.read();
    // b.chk_bin();  //we are hinding this function from user and we internally perform this in ones_complimenet
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}