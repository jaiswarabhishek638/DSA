// /swap of 2 number;
#include<iostream>
using namespace std;
void SWAP(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    
}

int main(){
    int x,y;
    cout<<"first no: ";
    cin>>x;
    cout<<"second no: ";
    cin>>y;
    SWAP(x,y);
    // no actual swaping ,it is only swapping in copy value ; not in original value
}