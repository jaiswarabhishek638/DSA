//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25 print this pattern

#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
}