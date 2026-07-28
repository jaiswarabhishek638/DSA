/* problem: ip --> a,b,c,d,e....
op ---> A,B,C,D,E....
**logic   -->ip-- a,b,c,d,e.. ASCII value 97,98,99....
--> op-- A,C,D,E... ASCII value 65,66,67...
a->'A'; charcater - 97'a' + A(65) = ans;
char ans = character - 'a' + 'A';
         = d(101)  - 97  + 65
         = 4 + 65;
         = 69==== 'D';

//logic 
*/

#include<iostream>
using namespace std;
char Convert(char name){
    char ans = name - 'a' +'A';
    return ans;
}
int main(){
    char lett;
    cout<<"Enter the character of letter: ";
    cin>>lett;
    cout<<Convert(lett);
}