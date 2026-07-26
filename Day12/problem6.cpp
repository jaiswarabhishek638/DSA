// 1's compliment of no
#include<iostream>
using namespace std;
int main(){
    int num, rem, ans=0,mult=1;
    cout<<"Enter the number:" ;
    cin>>num;
    if (num==0)
    {
        cout<<1;
        return 1;
    }
    
    while (num)
    {
        rem=num%2;
        rem=rem^1;
        num/=2;
        ans=rem*mult+ans;
        mult*=10;
    }
    cout<<ans;
}