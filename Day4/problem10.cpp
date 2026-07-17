//Problem: verify the nth number is prime or not;
#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"Enter the number to check the number is prime or not :";
    cin>>n;

    if(n<2){
        cout<<"Number is not prime";
        return 0 ;
    }
    else{
        for(i;i<n;i++){
            if(n%i==0){
                cout<<"Number is not prime";
                return 0;
            }

        }
        cout<<"Prime";
        
    }
}