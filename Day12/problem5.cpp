// Pallindrome problem the input is pallindrome or not;
#include<iostream>
using namespace std;
int main(){
    int rem, ans=0,num;
    cout<<"Enter the number: ";
    cin>>num;
    int x=num;
    if (num<0)
    {
        cout<<"The number is not a Pallendrome";
        return 0;
    }
    
    while (num>0)
    {
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
    if (x == ans){

        cout<<"The Number is Pallindrome";
    }
    else{

        cout<<"The number is not a Pallendrome";
    }
    
    
    
}