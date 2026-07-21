// top 5 advanced pattern printing
//print this pattern

//         *
//       * * *
//     * * * * * 
//   * * * * * * *
// * * * * * * * * *


#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cout<<"Enter the input: ";
    cin>>n; 
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        for(col=1;col<=((row*2)-1);col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}