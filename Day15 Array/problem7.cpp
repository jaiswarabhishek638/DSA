// sum of n element no of array;
#include<iostream>
using namespace std;
int main(){
    int n_no,sum=0;
    cin>>n_no;
    int arr[1000];
    
    for (int i = 0; i < n_no; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
    
}