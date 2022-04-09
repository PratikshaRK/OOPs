#include<iostream>
#include<map>
#include<string>
using namespace std;

// map: use to store key value pair like dictionary.
// Map is an associative array.


int main(){
    map<string, int> marksMap; // map created and it store name and mark of students
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    marksMap.insert({{"Kazume",169},{"Kuroo",187}});

    map<string ,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n"; 
    }
    
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The maxsize is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty();

    return 0;
}