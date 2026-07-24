//  octal to decimal;
#include<iostream>
using namespace std;
int main(){
    int num, mult=1,rem,ans=0;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mult+ans;
        mult *= 8;

    }
    cout<<ans<<endl;
    
}