// problem : number and power;
#include<iostream>
using namespace std;
int main(){
    int i = 1,num,n, pow;;
    cout<<"Enter the number: ";
    cin>>num;
    n = num;
    cout<<"Enter the power: ";
    cin>>pow;
    for(i;i<pow;i++){
        num = num*n;
    }
    cout<<num;
    
}