// function -- to prevent repetative block of code and dirty code
// it is useful for 1. reuseable 2. readibility optimized/ increased;

#include<iostream>
using namespace std;
int SUM(int x, int y){ // function declare 
    int sum = x + y; // function define
    return sum;
}
int MULT(int m,int n){
    int mult=m*n;
    return mult; 
}
void fun(){//void is not any return type , it is only to print something
    cout<<"Hello Dosto\n";
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"The sum is "<<SUM(a,b); //argument pass 
    cout<<endl;
    cout<<"Multiplication is "<<MULT(a,b)<<endl;

    fun();//no argument pass
}