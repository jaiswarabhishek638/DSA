#include<iostream>
using namespace std;
int main(){

    int a = 10;
    // print the address of a ;
    cout<<&a<<endl;

    int *ptr = &a;
    cout<<ptr<<endl;
    
    float m = 2.6;
    cout<<int(&m)<<endl;
    float *ptr1 = &m;
    cout<<int(ptr1)<<endl;
    cout<<int(&ptr1)<<endl;


    int z = 10;
    int *ptr3=&z;
    cout<<sizeof(ptr3)<<endl;//4 byte
    cout<<ptr3<<endl;//address of a;//0x61fef8
    cout<<*ptr3<<endl;//value of a;//10
}