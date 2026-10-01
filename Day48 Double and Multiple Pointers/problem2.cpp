// modify value which are present in n;using multiple pointers;
#include<iostream>
using namespace std;
int main(){
    int n = 40;
    int *p1 = &n; //modify through  
    // *p1 = *p1 + 5; //single pointer
    // cout<<n;
    int **p2 = &p1;//modify through
    // **p2 = **p2 + 25;//double pointer;
    // cout<<n;
    int ***p3 = &p2;//modify through
    ***p3 = ***p3 + 10;//triple pointer
    cout<<n;
}