// problem: sum of square of nth number;
#include<iostream>
using namespace std;
int main(){
    int sum=0,i=1,n,num=1;
    cout<<"Enter the Nth number: ";
    cin>>n;
    for(i; i<=n;i++){
        num= i * i;
        sum=sum+num; 
    }
    cout<<sum;
}