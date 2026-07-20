// 5 
// 5 4
// 5 4 3
// 5 4 3 2 
// 5 4 3 2 1 print this pattern

#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=5;row>=1;row--){
        for(col=5;col>=row;col--){
            cout<<col<<" ";
        }  
        cout<<endl;
    }
}