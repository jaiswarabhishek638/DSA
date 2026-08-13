// 4 sum problem: tc: o(n^3);
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FourSum(vector<int>arr, int target){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int ans;
    for (int i = 0; i < n-3; i++)
    {
        for (int j = 1; j < n-2; j++)
        {
            ans = target - arr[i] - arr[j];
            int start = j+1,end = n-1;
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
    cout<<"Element in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<FourSum(arr,target);
}