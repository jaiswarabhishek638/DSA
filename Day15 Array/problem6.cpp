// size of array;
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,8,9,6,5,6,65};
    cout<<"Size of total arr: "<<sizeof(arr)<<" Byte"<<endl;
    cout<<"Total element : "<<sizeof(arr)/sizeof(arr[0])<<" Byte"<<endl;
    cout<<"Size of single int element: "<<sizeof(arr[0])<<" Byte";
}