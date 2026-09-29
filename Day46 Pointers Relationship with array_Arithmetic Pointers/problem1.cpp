#include<iostream>
using namespace std;
int main(){
    int arr[5]={11,7,8,12,14};
    
    // print the address of first element;;
    cout<<*(arr)<<" address is "<<arr<<endl;
    cout<<*(arr)<<" address in integer "<<int(arr)<<endl;
    
    // print the address of 2 element;
    cout<<*(arr + 2)<<" address is "<<int(arr+ 2)<<endl;

    //different type to print the address of 5 element 4th index;
    cout<<arr+5<<endl;
    cout<<&arr[5]<<endl;
    int *ptr = arr+5;
    cout<<ptr<<endl;

    // to print the value of the 0th index and first element;
    cout<<arr[0]<<endl;
    cout<<*(arr)<<endl;
    int *ptr1 = arr+0;
    cout<<*ptr1<<endl;
    cout<<*(arr+0)<<endl;

    // for the other element;

    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    
}