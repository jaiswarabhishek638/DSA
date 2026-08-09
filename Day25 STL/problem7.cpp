#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(5);
    arr.push_back(53);
    arr.push_back(15);
    arr.push_back(110);
    arr.push_back(32);

    // sort
    //1.
    sort(arr.begin(),arr.end());
    // 2. 
    sort(arr.begin(),arr.end(),greater<int>());
    for (auto i : arr  )
    {
        cout<<i <<" ";
    }

    cout<<endl;
    // search
    // 1. 
    auto found = binary_search(arr.begin(),arr.end(),15);
    cout<<found<<endl;
    // 2.
    auto it = find(arr.begin(),arr.end(),32) - arr.begin();
    cout<<it<<endl;

    // count
    // int maximum = max_element(arr.begin(),arr.end());
    // cout<<maximum;
    
}