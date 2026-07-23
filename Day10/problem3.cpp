// print factor of any number
#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter the number: ";
    cin>>n;
    while (i<=n)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
    
}