// problem/leetcode :33. Search in Rotated Sorted Array
// suppose n = 8,target = 6,arr = {8 9 12 1 2 3 4 6 }; ans = 7 th index 
#include<iostream>
using namespace std;
int SearchRotateArr(int arr[],int n ,int target){
    int ans = -1,mid, start = 0,end = n-1;
    while (start <= end)
    {
        mid = start + (end - start)/2;
        if (arr[mid] == target)
        {
            ans =  mid;
            break;
        }
        // left side sorted 0 <= target < mid;
        else if (arr[mid] >= arr[0])
        {
            if (arr[start]<= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            
        }
        else{
            // right side sorted
            if (arr[mid]< target && target <= arr[end])
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }  
        }
    }
    return ans;
    
}
int main(){
    int n,target,arr[1000];
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<SearchRotateArr(arr,n,target);  
} 