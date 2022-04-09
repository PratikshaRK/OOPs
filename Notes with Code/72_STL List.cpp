#include<iostream>
#include<list>
using namespace std;

/*Linked List: bidirection linear list which show efficiant ways of insertion and deletion.
array: it store element in contiguas memory.
insertion/deletion fast = linked list
random accress fast = array
*/

void display(list<int> &lst) // visit all element in list1
{
    list<int> :: iterator it;
    for (it = lst.begin(); it !=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; // list of zero length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(14);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // instide of writng this we can use display method
    // list<int> :: iterator item;
    // item = list1.begin();
    // cout<<*item<<" ";
    // item++;
    // cout<<*item<<" "<<endl;

    
    display(list1);
    // Removing elements from list
    list1.pop_back(); // last element is delete(12)
    list1.pop_back(); // (9)
    display(list1);
    list1.pop_front(); //first element is delete(5)
    display(list1);
    list1.remove(1); // midel element is delete(1) and remove delete all the copies of that element
    display(list1);

    //Reversing the list
    list1.reverse();
    cout<<"Rverse a list1: "<<endl;
    display(list1);

    
    list<int> list2(3); // empty list of size 3
    list<int> :: iterator item;
    item = list2.begin();
    *item =45;
    item++;
    *item =6;
    item++;
    *item =9;
    item++;
    display(list2);

    // sorting the list
    list2.sort();
    list1.sort();
    display(list2);

    // merging the list1 and list2
    list1.merge(list2);
    cout<<"list1 after merging: "<<endl;
    display(list1);



    return 0;
}