// largest sum contiguous subarray: using prefix sum;
// TC: o(n^2);
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int LargestSum(vector<int>arr){
    int n = arr.size();
    int Maxi = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        int prefix=0;
        for (int j = i; j < n; j++)
        {
            prefix += arr[j];
            Maxi = max(Maxi,prefix);
        }
        
    }
    return Maxi;
    
}
int main(){
    int n;
    cout<<"size: ";
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<LargestSum(arr);
     
}