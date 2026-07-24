// decimal to binary

#include<iostream>
using namespace std;
int main(){
    int num,sum=0,rem,multi= 1;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {
        rem = num%2;
        num = num/2;
        sum = rem*multi+sum;
        multi*=10;

    }
    cout<<sum;
    
}