// void pointer/cast and static<void*> cast;
#include<iostream>
using namespace std;
int main(){
    char arr[5] = "1234";
    char *ptr = arr;
    // print the value of the given address;
    cout<<arr<<endl;
    cout<<ptr<<endl;

    // to print the address need to use the (void *);
    cout<<(void *)arr<<endl;
    cout<<(void *)ptr<<endl;
    cout<<(void *)ptr[3]<<endl;
    cout<<int((void *)ptr[3])<<endl;

    char name = 'a';
    char *ptr2 = &name;
    cout<<name<<endl;
    cout<<&ptr2<<endl;
    // void casting
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr2<<endl;


    // static casting
    cout<<static_cast<void*>(ptr2)<<endl; 
}