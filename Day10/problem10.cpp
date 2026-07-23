// scope of variable
#include<iostream>
using namespace std;
int main(){
    int i=20;
    for(int i=50;i<=100;i++){  //| { this is a single block of code }
        cout<<i<<" ";          //|  
    }                          //|

    cout<<endl<<"i is "<<i<<endl;
}