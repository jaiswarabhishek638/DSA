//reverse a string;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string a;
    cout<<"enter the word: ";
    cin>>a;
    int start  =0,end = a.size()-1;
    while (start < end)
    {
        swap(a[start],a[end]);
        start++ ,end-- ;

    }
    
    cout<<a;
}