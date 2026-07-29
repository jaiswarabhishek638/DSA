#include<iostream>
using namespace std;
int main(){
    int arr[]={4,10,6,7,8,90};
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    arr[1,6];//pass by value not reference
    cout<<endl<<arr[1];
    
}