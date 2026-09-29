#include<iostream>
using namespace std;
int main(){
    // print all the value using pointer;
    int arr[5]={11,7,8,12,14};
    int *ptr=arr;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<ptr[i]<<endl;
    // }

    //print all the address using pointer;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<(ptr+i)<<"  "<<int(ptr+i)<<endl;
    // }
    // cout<<endl;

    
    //arithmetic operation (ptr++ , ptr--) to print the address;

    // to print the value 
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }
    // cout<<endl;

    ptr = ptr+4;
    for (int i = 4; i>=0 ; i--)
    {
        cout<< *ptr <<endl;
        ptr--;
    }

    cout<<endl;


    ptr = ptr+0;
    // print the address;
    for (int i = 0; i < 5; i++)
    {
        
        cout<<int(ptr)<<endl;
        ptr++;
    }
    
    cout<<endl;

    for (int i = 5; i > 0; i--)
    {
        cout<<ptr<<endl;
        ptr--;
    }
    
     
}