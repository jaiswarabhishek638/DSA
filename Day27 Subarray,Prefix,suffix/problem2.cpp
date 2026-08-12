// divide array in two subarray with equal sum;
// TC: O(n^2);
#include<iostream>
using namespace std;
int DivideEqualSum(int arr[],int n){
    int total_sum=0,ans=0;
    int prefix = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        prefix += arr[i];
        ans = total_sum - prefix ;
        
        if (ans == prefix)
        {
            return 1;
        }
    }
    
}
int main(){
    int arr[1000];
    int n;
    cout<<"size : ";
    cin>>n;
    cout<<"element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<DivideEqualSum(arr,n);
    
}