// leetcode 153. Find Minimum in Rotated Sorted Array
#include<iostream>
using namespace std;
int RotatedArr(int arr[] , int n){
    int ans = arr[0],mid,start=0,end = n-1;
    while (start <= end)
    {
        mid = end + (start - end)/2;
        // "move right side" ,left side is sorted
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        // store value and "move left side", right side is sorted
        else{
            ans = arr[mid];
            end = mid - 1;
        }
        
    }
    return ans;
    
}
int main(){
    int n,arr[1000];
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<RotatedArr(arr,n);
}