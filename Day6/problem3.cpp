// 1
// 2 2 
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5 print this pattern

#include<iostream>
using namespace std;
int main(){
    int col, row;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
        
    }
}