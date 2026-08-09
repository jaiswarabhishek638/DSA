#include<iostream>
#include<vector>
using namespace std;
int main(){
    // delete in new vector;
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(16);
    v1.push_back(42);//name.erase(name.begin()+index)
    v1.push_back(65);
    v1.push_back(99);// remove 
    cout<<"Size of v1 is "<<v1.size()<<endl;
    cout<<"Capacity of v1 is "<<v1.capacity()<<endl;
    

    v1.pop_back();
    cout<<"Size of v1 is "<<v1.size()<<endl;
    cout<<"Capacity of v1 is "<<v1.capacity()<<endl;
    
    cout<<"Size of v1 is "<<v1.size()<<endl;
    cout<<"Capacity of v1 is "<<v1.capacity()<<endl;
    
    // remove 42 , index is 2
    v1.erase(v1.begin()+ 2 );
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    
    cout<<endl<<"Size of v1 is "<<v1.size()<<endl;
    cout<<"Capacity of v1 is "<<v1.capacity()<<endl;
    

    // insert element at the first index;
    v1.insert(v1.begin()+1,50); //name.insert(name.begin()+index, inserted value);

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    // replace 50 to 37 index is 1;
    v1[1]=37;
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    // to clear alll the element at once
    v1.clear();
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    // no vale is there // nothing print 
    cout<<endl<<"Size of v1 is "<<v1.size()<<endl;
    cout<<"Capacity of v1 is "<<v1.capacity()<<endl;
    

}