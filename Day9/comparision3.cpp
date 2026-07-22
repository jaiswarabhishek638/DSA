//comparision operator: 1 / 0 ;
// {== , < , > , <= , >= , !=} this are the types of operator;;
// it always used in case/if-else
#include<iostream>
using namespace std;
int main(){
    // comparision operator 
    // 1/0
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    // check whether the value is equal or not
    if(x!=y){
        cout<<x<<" and "<<y<<" are not equal and"<<endl;
        if(x>y){
            cout<<x<<" is greater"<<endl;
        }
        else{
            cout<<y<<" is greater"<<endl;
        }
    }
    else cout<<x <<" and "<<y<<" are equal"<<endl;
}