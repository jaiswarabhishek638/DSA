// logical operator -- && , || , !
// && --> both true the true ;
// || --> both false then false;
// ! --> 1->0 , 0->1;

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    cout<<"Enter the third value: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greater"<<endl;
    }else if(b>c){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"c is greater"<<endl;
    }
}