// decimal  to octal
#include<iostream> 
using namespace std;
int main(){
    int rem,mult=1,ans=0,num;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {
        rem=num%8;
        num=num/8;
        ans=rem*mult+ans;
        mult *= 10;
    }
    cout<<ans;
    
}