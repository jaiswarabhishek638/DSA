//         1
//       1 2 1
//     1 2 3 2 1 
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// print this pattern  known as "palindrome problem"

#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cout<<"enter the input: ";
    cin>>n;
    for(row=1;row<=n;row++){
        // print space , n-row;
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        // print 1 to row; in increasing order;
        for(col=1;col<=row;col++){
            cout<<col<<" ";
        }
        // print n-1 to 1 , in decreasing order;
        for(col=row-1;col>=1;col--){
            cout<<col<<" ";
        }
        // for next line ;
        cout<<endl;
    }
}