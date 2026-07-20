//print this pattern
//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// logic --> 
// start: row=1;row<=n;row++;
// print space (n - row)
// print col (time num );col<=row;

#include<iostream>
using namespace std;
int main(){
    int n, row, col;
    cout<<"Enter the Input: ";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}