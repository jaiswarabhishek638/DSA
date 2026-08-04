// binary search for descending order;
// start =0, end = n-1, mid = start + (end - start )/2;
#include<iostream>
using namespace std;
int DescendingBinarySearch(int arr[],int n, int key){
    int start = 0,end = n -1 , mid;
    while (start <= end )
    {
        mid = start + (end - start)/2; //to avoid overflow INT
        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key){
            end = mid - 1 ;
        }
        else{
            start = mid + 1;
        }
        
    }
    return -1;
}
int main(){
    int n,key,arr[1000];

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the element of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the key: ";
    cin>>key;

    cout<<DescendingBinarySearch(arr,n,key);
} 