// do while loop
// sum of n natural no's
#include<iostream>
using namespace std;
int main(){
    int i=1,sum=0,n;
    cout<<"Enter the natural no: ";
    cin>>n;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=n);
    cout<<"Sum is "<<sum;
}