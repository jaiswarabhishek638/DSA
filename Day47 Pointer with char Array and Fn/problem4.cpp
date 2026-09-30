// swap the 2 no using pointer and function
#include<iostream>
using namespace std;
void Swaping(int *p1 ,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    int first = 40 ,second = 90;
    Swaping(&first,&second);
    cout<<first<<"  "<<second<<endl;
}