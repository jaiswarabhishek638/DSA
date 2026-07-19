// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e print the pattern

#include<iostream>
using namespace std;
int main(){
    int row;
    char col;
    for ( row = 1; row <=5; row++)
    {
        for(col=97;col<=101;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
}