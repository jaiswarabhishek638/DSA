// default parameter
#include<iostream>
using namespace std;
int SUM(int a=0,int b=0){//default parameter a=0 b=0 , when the user is only calling the fn and not passing any argumnet then by defut value would be 0;
    int sum=a+b;
    return sum;

}
int main(){
    int a,b;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cin>>b;
    // cout<<SUM(a,b)<<endl;
    cout<<SUM();
}