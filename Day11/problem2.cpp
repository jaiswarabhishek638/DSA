// binary to decimal;
#include<iostream>
using namespace std;
int main(){
    int num,ans=0,mult=1,rem;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {   rem=num%10;
        num =num/10;
        ans=rem*mult+ans;
        mult *= 2;
    }
    cout<<ans<<endl;
    
}