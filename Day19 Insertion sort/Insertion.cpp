// Insertion sort in an array
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the Size of array: ";
    cin>>n;
    cout<<"Enter the Element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // algorithm of insertion
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
            
        }
        
    }

    // print the output
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}