// leetcode 35: select insert position
#include<iostream> 
using namespace std;
int InsertPosition(int arr[],int n, int target){
    int start = 0,end = n-1;
    int mid,index=n;
    while (start <= end)
    {
        mid = start + (end - start)/2;
        if (arr[mid] == target)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid +1;
        }
        else{
            end = mid -1;
            index = mid;
        }    
    }
    return index;
}
int main(){
    int n,target,arr[1000];
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"Target: ";
    cin>>target;
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<InsertPosition(arr,n,target);
    
}