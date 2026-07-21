// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *   split here and row start with 4 to 1
// *             *   split here and row start with 1to 4
// * *         * *
// * * *     * * *
// * * * * * * * *
// print this pattern

#include<iostream>
using namespace std;
int main(){
    int n, row, col; 
    cout<<"Enter the Input: ";
    cin>>n;
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=2*n-2*row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=2*n-2*row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}