#include<iostream>
using namespace std;
void Second(int *p1,int *p2){
    p1 = p2;
    *p1 = 2;
}
int main(){
    int i =0,j=1;
    Second(&i,&j);
    cout<<i<<" "<<j<<endl;
}