// roatate array by 1;
#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,6,8,9,10,15,12};
    int n = 7;
    int last = arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0]=last;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}