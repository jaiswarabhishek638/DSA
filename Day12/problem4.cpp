// power of 2
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if (num<1)
    cout<<"Not a Perfect square";
    
    while (num!=1)
    {
        if (num%2==1)
        {
            cout<<"Not a Perfect Square";
            return 0;
        }
        num/=2;
        
    }
    cout<<"Perfect Square";
    
    
}