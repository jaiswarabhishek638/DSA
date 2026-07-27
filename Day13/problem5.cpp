// function overloading
#include<iostream>
using namespace std;
void SWAP(int &a, int &b){//pass by reference
    int c=a;
    a = b;
    b = c;

}
void SWAP(float &x,float &y){ //method overloading -- 2 fn having same name but different function ,
    int z =x;
    x=y;
    y=z;

}
int main(){
    int a,b;
    cin>>a>>b;
    SWAP(a,b);
    cout<<a<<" "<<b<<endl;

    float x=4.12,y=6.42;
    SWAP(x,y);
    cout<<x<<" "<<y<<endl;

    // inbuild function in c++; 
    int f=9,g=32;
    swap(f,g);
    cout<<f<<" "<<g;
}