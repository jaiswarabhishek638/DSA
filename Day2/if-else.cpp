#include<iostream>
using namespace std;
int main(){
    int Package;
    cout<<"Enter your Offer Package in LPA ";
    cin>>Package;
    if (Package >= 15)
    {
        cout<<"Accepted "<<Package <<"LPA Sattisfied with your offer"<<endl;

    }
    else{
        cout<<"Rejected "<<Package<<"LPA Not satisfied with your offer";
    }
    return 0;
}