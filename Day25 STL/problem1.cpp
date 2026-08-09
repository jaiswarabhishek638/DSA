// STL: Standard Template Library; Vector
// a.push_back, a.size(), a.capacity;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // create vector , declare;
    vector<int> a;
    // size and capacity;
    cout<<"Size of a is "<<a.size()<<endl;
    cout<<"Capacity of a is "<<a.capacity()<<endl;

    a.push_back(4);
    cout<<"Size of a is "<<a.size()<<endl;
    cout<<"Capacity of a is "<<a.capacity()<<endl;

    a.push_back(6);
    cout<<"Size of a is "<<a.size()<<endl;
    cout<<"Capacity of a is "<<a.capacity()<<endl;

    a.push_back(8);
    cout<<"Size of a is "<<a.size()<<endl;
    cout<<"Capacity of a is "<<a.capacity()<<endl;

    a.push_back(10);
    cout<<"Size of a is "<<a.size()<<endl;
    cout<<"Capacity of a is "<<a.capacity()<<endl;

    a.push_back(12);
    cout<<"Size of a is "<<a.size()<<endl;
    cout<<"Capacity of a is "<<a.capacity()<<endl;

    return 0;
}