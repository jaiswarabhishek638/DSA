//problem: nth  factorial;
#include<iostream>
using namespace std;
int main(){
    int i=1,prod=1,n;
    cout<<"Enter the Factorial no's :";
    cin>>n;
    for(i;i<=n;i++){
        prod = prod * i;
    }
    cout<<prod;
}
