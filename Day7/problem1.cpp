//hard level pattern printing
//         *
//       * *  
//     * * *
//   * * * *
// * * * * * print this pattern

//logic --> n = 5, print sapce = n - row(star);


//Hard Code
// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     for(row=1;row<=5;row=row+1){
//         for(col = 1; col<=5-row;col=col+1){
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col=col+1){
//             cout<<"* ";
//         }
//         cout<<endl;
        
//     }
// }

// with the user input;;// Flexible code (user i/p)
#include<iostream>
using namespace std;
int main(){
    int row, col,n;
    cout<<"enter the number: ";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}