#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(53);
    arr.push_back(15);
    arr.push_back(115);
    arr.push_back(32);
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // searching in binary search;
    cout<<binary_search(arr.begin(),arr.end(), 115)<<endl;

    // searching through value and return index;
    cout<< find(arr.begin(),arr.end(),115)- arr.begin();

}