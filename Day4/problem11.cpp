//problem: fibonacci series: 0 1 1 2 3 5 8 . . . . .
#include<iostream>
using namespace std;
int main(){
    int n,i=1, sum=0, prev= 1, num = 0;
    cout<<"Enter the index no for the fabonacci: ";
    cin>>n;
    for(i;i<n;i++){
        num = prev;
        prev = sum;
        sum = prev + num;
    }
    cout<<sum;
}