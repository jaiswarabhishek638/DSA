// function in pointers
#include<iostream>
using namespace std;
// pass by pointer;
int incr(int *ptr){
    *ptr = *ptr + 1;
}
int main(){
    int num = 10;
    int temp = num;
    incr(&num);
    // pass by pointer;
    cout<<num<<endl;
    cout<<temp<<endl;
}