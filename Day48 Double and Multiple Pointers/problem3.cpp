// multiple pointer using function
#include<iostream>
using namespace std;
void fun(int *p){
    *p += 1;
}
int main(){
    int  n = 10;
    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;
    fun(p1);
    cout<<n<<endl;
    cout<<*p1<<endl;
}