// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

#include<iostream>
using namespace std;
int main(){
    int col;
    char row;
    for(row=97;row<=101;row++){
        for(col=1;col<=5;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}