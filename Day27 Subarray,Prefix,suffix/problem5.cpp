// optimized approach -- TC: o(n);
// largest sum contiguous subarray: using Kadane's Algorithms
// kadanes algorithm say that an optimized dynamic programming technique used to find the maximum sum of a contiguous subarray within a one-dimensional array of numbers. It solves the problem in a single pass with O(n) time complexity and O(1) space complexity, drastically improving upon the naive brute-force approach that requires O(n²) or O(n³) operations

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int KadanesAlgo(vector<int> arr){
    int n=arr.size();
    int Maxi = INT8_MIN , prefix =0;
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        Maxi = max(prefix,Maxi);

        if (prefix < 0)
        {
            prefix = 0;
        }
        
    }
    return Maxi;
    
}
int main(){
    int n;
    cout<<"size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Element in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<KadanesAlgo(arr);
    

}