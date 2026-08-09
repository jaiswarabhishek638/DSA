#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(62);
    arr.push_back(12);
    arr.push_back(03);
    arr.push_back(112);
    cout<<arr[0]<< endl;
    // same to print first element 
    cout<<arr.front()<<endl;
    // last element print
    cout<<arr[arr.size()-1] <<endl;
    // same to print last element 
    cout<<arr.back()<<endl;

    // copy value one vector to another easily;
    vector<int> arr1;
    arr1 = arr;

    // another way to print 
    for (auto it = arr1.begin(); it != arr1.end(); it ++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto i:arr1){
        cout<<i<<"  ";
    }
    
    
    
}