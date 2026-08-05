// leetcod 34: first and last occurance;
#include<iostream>
#include<vector>
using namespace std;
int SearchBinary(int arr[],int size ,int target){
    int start = 0,end = size - 1 ;
    int first = -1 , last = -1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start)/2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target)
        start =  mid + 1;
        else
        end = mid - 1;
    }
    // find last;
    start = 0,end = size - 1;
    while (start <= end)
    {
        mid = start + (end - start)/2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target)
        start = mid + 1;
        else
        end = mid -1;
    }
    cout<<first<<"  "<<last;
};
int main(){
    int n,target;
    cout<<"Enter the size of array:" ;
    cin>>n;
    cout<<"target: ";
    cin>>target;
    int arr[1000];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SearchBinary(arr,n,target);
}