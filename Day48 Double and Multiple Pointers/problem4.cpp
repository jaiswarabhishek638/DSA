// change the address of the pointer; int = 4byte
#include<iostream>
using namespace std;
void pass(int **p){
    *p += 1;
}
int main(){
    int n = 10;
    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;
    cout<<int(p1)<<endl;
    pass(p2);
    cout<<int(p1)<<endl;
}