// problem: num is positive , negative or zero;
#include<iostream>
using namespace std;
int main()
{
    int Num;
    cout<<"Enter the Number: ";
    cin>>Num;
    if (Num>0)
    {
        cout<<Num<<" Is positive Number";
    }
    else if(Num==0){
        cout<<Num<<" Number is Null";
    }
    else{
        cout<<Num <<" Is negative Number";
    }
    
}