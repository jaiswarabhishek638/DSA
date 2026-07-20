//print the pattern
//             A
//          A  B
//       A  B  C
//    A  B  C  D
// A  B  C  D  E

// Hard coded program
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=1;row<=5;row++){
//         for(char col='A';col<=5-row+'A';col++){
//             cout<<"  ";
//         }    
//         for(char col='A';col<row+'A';col++){
//             cout<<col<<" ";
//         }   
//         cout<<endl;
//     }
// }

// flexible program;;
#include<iostream>
using namespace std;
int main(){
    int n,row;
    char col;
    cout<<"Enter the Input: ";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col='A';col<=n-row+'A';col++){
            cout<<"  ";
        }
        for(col='A';col<='A'+row-1;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}