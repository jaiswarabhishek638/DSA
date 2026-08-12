// TC=O(n^3);
#include<iostream>
using namespace std;
int Subarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int  j = i; j < n; j++)
        {
            cout<<"[ ";
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<" ]";
            
        }
        
        
    }
    
}
int main(){
    int arr[1000];
    int n;
    cout<<"Size:";
    cin>>n;
    cout<<"Element of array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Subarray(arr,n);
    
}