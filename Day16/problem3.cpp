// second largest no find;
#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,12,80,40,60,90};
    int Highest = -1, Second = -1;
    // highest no find
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]>Highest)
        {
            Highest = arr[i];
        }
    }
    // second highest no find 
    for (int i = 0; i < 6; i++)
    {
        if (Highest != arr[i])
        {
            Second = max(Second,arr[i]);
        }
        
    }
    cout<<Second;
    
    
}