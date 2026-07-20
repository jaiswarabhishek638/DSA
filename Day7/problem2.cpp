//       1
//     2 2
//   3 3 3
// 4 4 4 4 
// print the pattern

//logic --> 
//start: row= 1, n=4, stop:row<=n;row++;
// print "space" n-row time
// print the row

#include<iostream>
using namespace std;
int main(){
    int n, row, col;
    cout<<"Enter the number: ";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }

        for(col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}