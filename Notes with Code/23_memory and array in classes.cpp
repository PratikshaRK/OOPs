#include <iostream>
using namespace std;

// For every objects , commom things are store in same place (member function)
// For every objects , differents things are store in different place (variable)

// Memory allocate for member function is common.
// Memory allocate for variable/data member is different.

class Shop
{
    int itemId[100];  // interger array
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setItem(void);
    void displayPrice(void);
};

void Shop ::setItem(void)
{
    cout << "Enter Id of your item no: " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setItem();
    dukaan.setItem();
    dukaan.setItem();
    dukaan.displayPrice();

    return 0;
}