//problem : table program;
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number for the table: ";
    cin>> n ;
    for(i=1;i<=10; i++){
        cout<< n << " * "<< i << " = " <<n*i<<endl; 
    }
    
}