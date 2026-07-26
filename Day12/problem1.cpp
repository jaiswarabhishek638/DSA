// Sum of number in single digit
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>9)
    {
        int rem, ans=0;
        while (num!=0)
        {
            rem=num%10;
            num/=10;
            ans=ans+rem;
        }
        num=ans;
    }
    cout<<num;
}    