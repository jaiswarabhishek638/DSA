// reverse an array;
#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,2,6,58,7,9,11};
    int i=0,j=6;
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}