#include<iostream>
using namespace std;
int main(){
    int arr[5]={11,7,8,12,14};
    // to print all the address using loop;
    for(int i=0;i<5;i++)
    cout<<arr+i<<endl;

    cout<<endl;
    // to print all the value using loop
    for(int i=0;i<5;i++)
    cout<<*(arr+i)<<endl;

    cout<<endl;
    // print the address and value in the single loop;
    for (int i = 0; i < 5; i++)
    {
        cout<<*(arr+i)<<" address in integer "<<int(arr+i)<<endl;
        cout<<*(arr+i)<<" address in hexadecimal "<<(arr+i)<<endl<<endl;
    }
    
}