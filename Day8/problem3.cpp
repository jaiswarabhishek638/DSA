// * * * * * * * * *
//   * * * * * * *
//     * * * * * 
//       * * *
//         *
// printy this pattern 

// logic  row = 1 ,row<=n 
// print star ((n * 2)-1)
// print space(col=5;col>=n-row)
// row++;


#include<iostream>
using namespace std;
int main(){
    int n, row, col;
    cout<<"Enter the Input: ";
    cin>>n;
    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        for(col=1;col<=2*row-1;col++){
            cout<<"* ";
        }
    cout<<endl;
    }
}