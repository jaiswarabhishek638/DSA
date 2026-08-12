// divide array in two subarray with equal sum; using vector
// TC = O(n^2);
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int divide(vector<int>arr){
    int n = arr.size(), prefix = 0,total_sum=0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        int ans = total_sum - prefix ;
        if (ans == prefix)
        {
            return 1;
        }
        
    }
    return 0;
    
    
}
int main(){
    int n;
    cout<<"Size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"element in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<divide(arr);
}