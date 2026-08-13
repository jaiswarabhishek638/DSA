// 3 sum problem: tc: O(n^2)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ThreeSum(vector<int>arr,int target){
    int n = arr.size();
    //sorting in increasing order:
    sort(arr.begin(),arr.end());
    int ans;
    for (int i = 0; i < n-2; i++)
    {
        ans = target - arr[i];
        int start = i+1,end = n-1;
        while (start < end)
        {
            if (arr[start] + arr[end] == ans)
            {
                return 1;
            }
            else if (arr[start] + arr[end] > ans)
            {
                end-- ;
            }
            else{
                start++ ;
            }  
        }  
    }
    return 0;
}
int main(){
    int n,target;
    cout<<"size: ";
    cin>>n;
    cout<<"target: ";
    cin>>target;
    vector<int>arr(n);
    cout<<"element in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<ThreeSum(arr,target);
    
    
}