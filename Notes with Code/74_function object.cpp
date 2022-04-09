#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // function object(functor): Function wrapped in a class so that is available like an object ().
    int arr[] = {1, 73, 4, 122, 54, 0};
    sort(arr, arr + 5); // array is sort till 5 elements only
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Descending order: " << endl;
    sort(arr, arr + 6, greater<int>()); // greater is a function object use to sort in descending order.
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}