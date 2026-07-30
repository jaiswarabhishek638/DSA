// fibonacci series find number using index of array;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the index of  the array: ";
    cin>>n;
    // i-2 = 0
    // i-1=1;
    int arr[1000];
    arr[0]=0;
    arr[1]=1;
    for (int i = 2; i <= n-1; i++)
    {
       arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1]<<" ";
    

}