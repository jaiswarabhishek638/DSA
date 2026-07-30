// using function to pass the array;
#include<iostream>
using namespace std;
int Fun(int a[] , int n){
    cout<<"Size of a: "<<sizeof(a)<<endl;//pointer == a[]
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int arr[5]={1,5,6,8,6};
    cout<<"Size of arr[5]: "<<sizeof(arr)<<endl;
    Fun(arr,5);
}