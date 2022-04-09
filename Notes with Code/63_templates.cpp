#include <iostream>
using namespace std;
/* class is a template for an object.
we can create class from a template.

Template: we create class at one's and then autometically classes created for different datatypes.
template is also called as parameterized constructor.
DRY: do not reapeat yourseft.
*/
template <class T> // T is a variable we can specify it later. T is template parameter
class vector
{
public:
    T *arr; // interger pointer and using T we are passing datatype to the class vector
    int size;
    vector(int m) // constructor
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
            return d;
        
    }
};

int main()
{
    vector <float>v1(3); // here i have specify T as float and i create new vector class with float
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.3;

    vector<float> v2(3);  // here i have specify T as float and i create new vector class with float
    v2.arr[0] = 1.2;
    v2.arr[1] = 0.2;
    v2.arr[2] = 11.1;

    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}