// bitwise operator

#include<iostream>
using namespace std;
int main(){
    // & bitwise operator
    int ans = 2 & 3;
    // 2 = 10 & 3 = 11 
    // 1 0 
    // 1 1
    // ans 1 0 = 2
    cout<<ans<<endl; //2 

    // | bitwise operator 
    int Orr = 2 | 3;
    // 2 = 1 0
    // 3 = 1 1
    //     1 1 = 3
    cout<<Orr<<endl;//3

    // ^ bitwise operator
    int NotO = 2^ 3;
    // 2 = 1 0
    // 3 = 1 1
    //     0 1 = 1
    cout<<NotO<<endl;//1

    // << (left shift operator)
    int leftSh=9<<3;
    // formula num * 2^x;
    // 9 * 2^3 =72
    cout<<leftSh<<endl;//72

    // >> (right shift operator)
    int rightSh=32>>4;
    // formula num /x^2;
    // 27 / 3^2 = 1;
    cout<<rightSh<<endl;//1

    
}