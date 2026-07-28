// check whether if it is a rectangle or not (1,b,c,d input from the user:)
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter the length of all the 4 sides: ";
    cin>>a>>b>>c>>d;
    if ((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
    {
        cout<<1;
        return 1;
    }
    else{
        cout<<0;
        return 0;
    }
    
}