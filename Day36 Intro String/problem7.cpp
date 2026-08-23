//print size with out .size()
#include<iostream>
using namespace std;
int main(){
    string s = "rohit";
    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    cout<<size;//5
    
}