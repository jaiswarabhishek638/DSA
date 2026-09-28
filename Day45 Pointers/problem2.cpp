#include<iostream>
using namespace std;
int main(){
    int x = 60;
    int *p=&x;
    cout<<p<<endl;//address of a;
    cout<<*p<<endl;//value of a;

    int y = 80;
    p = &y; // p changes the initial address of x to y
    cout<<p<<endl; // it shows the address of y;
    cout<<*p<<endl; // *p shows the value of y;
    // it follows the sequence of operations;

    y = 1;
    cout<<*p<<endl;

}