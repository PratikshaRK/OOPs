#include<iostream>
#include<vector>
using namespace std;
// vector<int>  use this as a datatype like int,float, char.
// Difference betweeen vector and array is we can't change size of array but we can change the size of vector.

template <class T>
void display(vector<T> &v){ 
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)  // size return the size of vector
    {
        cout<<v[i]<<" ";
       // cout<<v.at(i)<<" "; // at returns the where it present
    }
    cout<<endl;
    
}
int main(){
    // Ways to create a vector
    vector<int> vec1; // Zero length integer vector
    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('g');
    display(vec2);
    vector<char> vec3(vec2);  // 4-element character vector from vec2
    display(vec3);
    vector<int> vec4(6, 3); // 6-element vector of 3s
    display(vec4);
    cout<<vec4.size();

    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    
    //vec1.pop_back();  // delete one last element from vector 
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();  // iterator is one kind of pointer which point to the element of vector and we need iterator to insert element in vector. iterator initialize with first(begin) element of vector
    vec1.insert(iter+1,5,566); // here i increament item by 1 and i insert 566 value 5 times 
    display(vec1);
    return 0;
}