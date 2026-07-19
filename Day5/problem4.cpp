// reversre pattern
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row = 1;row<=5;row++){
        for(col = 5; col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}