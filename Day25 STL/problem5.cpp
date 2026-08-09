#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(53);
    ans.push_back(15);
    ans.push_back(115);
    ans.push_back(32);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    // sort the vector;
    // increasing order;;
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;
    // sort in decreasing order;

    sort(ans.begin(),ans.end(),greater<int>());
    for(auto i : ans){
        cout<<i<<" ";
    }
    // or another way of decreasing order

    cout<<endl;
    sort(ans.rbegin(),ans.rend());
    for(auto i : ans){
        cout<<i<<" ";
    }
}