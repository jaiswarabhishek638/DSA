// operators are characters or keywords that represent actions involving variables and values. Common types include arithmetic operators (+, -, *, /), comparison operators (==, >, <), and logical operators (AND, OR)

// Arithmetic operators: 1. Urinary 2. Binary

// 2. Binary operator with precision {* / %} > {+ -}
#include<iostream>
using namespace std;
int main(){
    cout<< 6-12 / 9 * 3 + 4<<endl;//first * , then / , + and -;;


    // 1. urinary operator 
    // a. increment --> pre (++a) and post(a++);
    int a = 10;
    int b=a++;
    cout<<b<<"  "<<a<<endl;//b --> a value put hoga first then it increment ; it is known as post increment 
    
    int w = 4;
    int q = ++w;
    cout<<w<<"  "<<q<<endl;// first increment then print the value on the console/ terminal


    // b. decrement --> pre (--a) and post(a--);
    int x = 6;
    int y = x--;
    cout<<"y = "<<y<<"  "<<"x = "<<x<<endl;// first x ki vlaue y me put hogi then after it is decrement is known as post decrement 


    int f = 6;
    int h = --f;
    cout<<"f = "<<f<<"  "<<"h = "<<h<<endl;// first decrement the value of f then print it,, this decrement is known as pre decrement 
}