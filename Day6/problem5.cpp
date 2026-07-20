// a
// b b
// c c c 
// d d d d
// e e e e e 

// method 1
// #include<iostream>
// using namespace std;
//  int main(){
//     char row;
//     int col;
//     for(row=97;row<=101;row++){
//         for(col=1;col<=row-96;col++){
//             cout<<row<<" ";

//         }
//         cout<<endl;
//     }
//  }

// method2
#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        char name='a'+ row-1;
        for(int col=1;col<=row;col++){
            // char name='a'+ row-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}