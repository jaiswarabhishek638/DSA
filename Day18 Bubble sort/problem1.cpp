// bubble sort;;
// arr[]= 2,8,4,5,9; n=5
//  round 1 
// 2 > 8 no  round n - 2
// 8>4 yes shift 8 in place of 4
// 8>5 yes shift 8 in place of 5
// 8>9 no shift

// round 2  2,4,5,8,9 
//  if round not taken then finally tell array is sorted

#include<iostream>
using namespace std;
int main(){
    int arr[6]={8,84,12,18,21,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = n-2; i >= 0; i--)
    {
        bool swaped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped = 1;
            }
            
        }
        if (swaped ==0)
        {
            break;
        }
        
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}