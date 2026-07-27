// function using prime number;
#include<iostream>
using namespace std;
bool Prime(int x){
    if (x<2)
    return 0;
    for (int i = 2; i < x; i++)
    {
        if (x%i==0) 
        return 0;
    }
    return 1;  
}
int Fact(int x){
    int ans=1;
    if (x<1) 
    return 0;
    
    for (int i = 1; i <= x ; i++){
        ans=i*ans;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the number: ";
    cin>>a>>b;
    cout<<Prime(a)<<endl;
    cout<<Fact(a)<<endl;
    cout<<Prime(b)<<endl;
    cout<<Fact(b)<<endl;
    cout<<Prime(b-a)<<endl;
    cout<<Fact(b-a)<<endl;
}