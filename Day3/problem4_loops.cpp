// problem:recognized the pattern and solve using loop for usinig user input; //1 , 5 ,9,13,......n

#include<iostream>
using namespace std;
int main(){
    int i,num;
    cout<<"Enter the Number; ";
    cin>>num;
    for(i=1;i<=num;i=i+4){
        cout<<"Pattern is "<<i<<endl;
    }
}