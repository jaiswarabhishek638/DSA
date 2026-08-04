// binary search // for assending order;;
// middle elemnt = (start + end)/2;
// shift left , end = mid - 1;
// shift right, start = mid + 1;
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n,int key){
    int start=0,end=n-1,mid;
    while (start<=end)
    {
        //mid = (start + end)/2;//it can be overflow 
        mid = start + (end - start)/2;
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
    
}
int main(){
    int arr[1000];
    int n,key;
    cout<<"Enter the Number of element in array: ";
    cin>>n;
    cout<<"Enter the element in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Key: ";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    
    return 0;
}