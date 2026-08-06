// problem1: leetcode :852;
// peak index in mountain array;
#include<iostream>
using namespace std;
int PeakMountain(int arr[],int n){
    int start = 0,end = n-1;
    int mid;
    while (start <= end)
    {   
        mid =end + (start - end )/2;//to avoid overflow in vector
        if (arr[mid] > arr[mid -1] && arr[mid] > arr[mid + 1])
        {
            return mid;
            break;
        }
        else if (arr[mid] > arr[mid - 1])
        {
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
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    cout<<"Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<PeakMountain(arr,n);
    
}