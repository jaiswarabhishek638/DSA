// pass by reference 2 diff name but object is same ;
#include<iostream>
using namespace std;
void Swapping(int &p1,int &p2){
    int temp = p1;
    p1 = p2 ;
    p2 = temp;
}
// no use of pointer in it ;
int main(){
    int first = 100,second = 500;
    Swapping(first,second);
    cout<<first<<" " <<second<<endl;
}