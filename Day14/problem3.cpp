// trailing factorial problem 
// calculate the zeros in the problem;
// 1*2*3*4*5*6= 6!
// 2*3*2*2*5*2*3;
// 2*5 =10;//when ever this comes then we get a zero value at the end;
// n!/n ; but n!/n>=5;
#include<iostream>
using namespace std;
int TrailingFact(int n){
    int count= 0;
    while (n>=5)
    {
        count += n/5;
        n /= 5;
    }
    return count;
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Zero at the end is "<<TrailingFact(n);
}