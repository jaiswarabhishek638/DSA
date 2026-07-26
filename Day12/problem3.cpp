// reverse the integer
#include<iostream>
using namespace std;
int main(){
    int rem,ans=0,num;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
    cout<<ans;
    
}