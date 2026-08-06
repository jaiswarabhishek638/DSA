// leetcode : 1539. Kth Missing Positive Number
// demo eg 1:
//  Enter the size: 6
// which kth find : 6
// Enter the element: 2 3 4 7 11 12
#include<iostream>
#include<vector>
using namespace std;
int KthMissing(int arr[],int k){
    int start = 0,end = sizeof(arr-1);
    int mid;
    int ans = sizeof(arr);
    while (start <= end)
    {
        mid = start + (end - start)/2;
        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid ;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        
    }
    return ans + k;
    
}
int main(){
    int n,k,arr[1000];
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"which kth find : ";
    cin>>k;
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<KthMissing(arr,k);
    
}